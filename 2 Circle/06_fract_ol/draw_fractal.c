#include "fractol.h"

static uint32_t	get_color_in_fractal(t_canvas *canvas)
{
	int		iteration;
	int		color;
	double	tmp_x;

	iteration = 0;
	while (canvas->z_re * canvas->z_re + canvas->z_im * canvas->z_im <= 4
		&& iteration < canvas->max_iter)
	{
		tmp_x = canvas->z_re * canvas->z_re
			- canvas->z_im * canvas->z_im + canvas->c_re;
		canvas->z_im = 2 * canvas->z_re * canvas->z_im + canvas->c_im;
		canvas->z_re = tmp_x;
		iteration++;
	}
	if (iteration == canvas->max_iter)
		color = rgb2hex(0, 0, 0);
	else
		color = hsv2hex(iteration % 360, (double)iteration / canvas->max_iter,
				((double)iteration / canvas->max_iter));
	return (color);
}

/*
 * Draw the Mandelbrot set.
 * A Mandelbrot set is a set that does not diverge when z_n = z_(n-1) + C.
 * C is the position of the pixel to be drawn.
 * Z_0 should be set to 0.
 *
 * If divergence occurs, fill with black
 *
 * Memo:
 *   Z_(n+1) = Z_n ^ 2 + C (Z is an expression for a complex number)
 *   (a + bj)^2 = a^2 + 2abj - b^2
*/
int	draw_mandelbrot(t_canvas *canvas)
{
	int	x;
	int	y;

	canvas->delta_re = (canvas->max_re - canvas->min_re) / (WIDTH - 1);
	canvas->delta_im = (canvas->max_im - canvas->min_im) / (HEIGHT - 1);
	y = 0;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			canvas->c_im = canvas->min_im + y * canvas->delta_im;
			canvas->c_re = canvas->min_re + x * canvas->delta_re;
			canvas->z_re = 0;
			canvas->z_im = 0;
			my_mlx_pixel_put(&canvas->img, x, y,
				get_color_in_fractal(canvas));
			x++;
		}
		y++;
	}
	return (0);
}

/*
 * Draw the Julia set.
 * The Julia set is the set that does not diverge when z_n = z_(n-1) + C.
 * C is a complex constant (the same number is used for all pixels).
 * Z_0 is the position of the pixel to be drawn.
 *
 * If divergence occurs, it is filled with black.
 */
int	draw_julia(t_canvas *canvas)
{
	int	x;
	int	y;

	canvas->delta_re = (canvas->max_re - canvas->min_re) / (WIDTH - 1);
	canvas->delta_im = (canvas->max_im - canvas->min_im) / (HEIGHT - 1);
	y = 0;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			canvas->z_im = canvas->min_im + y * canvas->delta_im;
			canvas->z_re = canvas->min_re + x * canvas->delta_re;
			my_mlx_pixel_put(&canvas->img, x, y,
				get_color_in_fractal(canvas));
			x++;
		}
		y++;
	}
	return (0);
}

static uint32_t	get_color_in_burningship(t_canvas *canvas)
{
	int		iteration;
	int		color;
	double	tmp_x;

	iteration = 0;
	while (canvas->z_re * canvas->z_re + canvas->z_im * canvas->z_im <= 4
		&& iteration < canvas->max_iter)
	{
		tmp_x = canvas->z_re * canvas->z_re
			- canvas->z_im * canvas->z_im + canvas->c_re;
		canvas->z_im = abs_double(2 * canvas->z_re * canvas->z_im)
			+ canvas->c_im;
		canvas->z_re = tmp_x;
		iteration++;
	}
	if (iteration == canvas->max_iter)
		color = rgb2hex(0, 0, 0);
	else
		color = hsv2hex(iteration % 360, (double)iteration / canvas->max_iter,
				((double)iteration / canvas->max_iter));
	return (color);
}

/*
 * Draw the burningship set.
 * A burning ship set is a set that does not diverge when z_n = z_(n-1) + C.
 * C is the position of the pixel to be drawn.
 * Z_0 should be set to 0
 *
 * If divergent, fill with black.
 *
 * Z_(n+1) = (abs(z_re) + abs(z_im)j) ^ 2 + C
 *   (Z is an expression for a complex number)
 *
 * The difference from the Mandelbrot set is that
 *   in barningship we take absolute values in sequences of iterations.
 */
int	draw_burningship(t_canvas *canvas)
{
	int	x;
	int	y;

	canvas->delta_re = (canvas->max_re - canvas->min_re) / (WIDTH - 1);
	canvas->delta_im = (canvas->max_im - canvas->min_im) / (HEIGHT - 1);
	y = 0;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			canvas->c_im = canvas->min_im + y * canvas->delta_im;
			canvas->c_re = canvas->min_re + x * canvas->delta_re;
			canvas->z_re = 0;
			canvas->z_im = 0;
			my_mlx_pixel_put(&canvas->img, x, y,
				get_color_in_burningship(canvas));
			x++;
		}
		y++;
	}
	return (0);
}
