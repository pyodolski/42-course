#include "fractol.h"

void	update_fractal_c(t_canvas *canvas)
{
	int		x;
	int		y;
	double	mouse_re;
	double	mouse_im;

	mlx_mouse_get_pos(canvas->mlx, canvas->win, &x, &y);
	if (!x && !y)
		return ;
	mouse_re = (double)x
		/ (WIDTH / (canvas->max_re - canvas->min_re)) + canvas->min_re;
	mouse_im = (double)y
		/ (HEIGHT / (canvas->max_im - canvas->min_im)) * -1 + canvas->max_im;
	canvas->c_re = mouse_re;
	canvas->c_im = mouse_im;
}

int	main_loop(t_canvas *canvas)
{
	if (canvas->is_pressed_shift)
		update_fractal_c(canvas);
	canvas->fractal_drawer(canvas);
	mlx_put_image_to_window(canvas->mlx, canvas->win, canvas->img.img, 0, 0);
	return (0);
}

bool	set_fractal_type(t_canvas *canvas, char *str)
{
	if (!ft_strncmp(str, "mandelbrot", 11))
		canvas->fractal_drawer = draw_mandelbrot;
	else if (!ft_strncmp(str, "julia", 6))
		canvas->fractal_drawer = draw_julia;
	else if (!ft_strncmp(str, "burningship", 12))
		canvas->fractal_drawer = draw_burningship;
	else
		return (false);
	return (true);
}

int	main(int argc, char **argv)
{
	t_canvas	canvas;

	if (argc != 2 || !set_fractal_type(&canvas, argv[1]))
	{
		printf("You have to select fractal type\n"
			"- mandelbrot\n"
			"- julia\n"
			"- burningship\n");
		return (1);
	}
	initialize_canvas(&canvas);
	mlx_hook(canvas.win, KeyPress, KeyPressMask, key_press_hook, &canvas);
	mlx_hook(canvas.win, KeyRelease, KeyReleaseMask, key_release_hook, &canvas);
	mlx_hook(canvas.win, ClientMessage, 1L << 17, exit_canvas, &canvas);
	mlx_mouse_hook(canvas.win, mouse_hook, &canvas);
	mlx_loop_hook(canvas.mlx, &main_loop, &canvas);
	mlx_loop(canvas.mlx);
}
