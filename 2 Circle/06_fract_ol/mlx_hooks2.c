#include "fractol.h"

static double	interpolate(double start, double end, double interpolation)
{
	return (start + ((end - start) * interpolation));
}

static void	zoom_canvas(t_canvas *canvas, int button, int x, int y)
{
	double	mouse_re;
	double	mouse_im;
	double	interpolation;

	mouse_re = (double)x
		/ (WIDTH / (canvas->max_re - canvas->min_re)) + canvas->min_re;
	mouse_im = (double)y
		/ (HEIGHT / (canvas->max_im - canvas->min_im)) + canvas->min_im;
	if (button == SCROLL_UP)
	{
		if (canvas->max_iter > 4)
			canvas->max_iter -= 4;
		interpolation = 1.0 / 0.8;
	}
	else if (button == SCROLL_DOWN)
	{
		canvas->max_iter += 4;
		interpolation = 1.0 / 1.2;
	}
	canvas->min_re = interpolate(mouse_re, canvas->min_re, interpolation);
	canvas->min_im = interpolate(mouse_im, canvas->min_im, interpolation);
	canvas->max_re = interpolate(mouse_re, canvas->max_re, interpolation);
	canvas->max_im = interpolate(mouse_im, canvas->max_im, interpolation);
}

int	mouse_hook(int button, int x, int y, t_canvas *canvas)
{
	if (button == SCROLL_UP || button == SCROLL_DOWN)
		zoom_canvas(canvas, button, x, y);
	return (0);
}
