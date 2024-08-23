#include "fractol.h"

int	exit_canvas(t_canvas *canvas)
{
	mlx_destroy_window(canvas->mlx, canvas->win);
	exit(0);
}

void	initialize_canvas(t_canvas *canvas)
{
	canvas->mlx = mlx_init();
	if (!canvas->mlx)
		exit(1);
	canvas->win = mlx_new_window(canvas->mlx, WIDTH, HEIGHT, "fractol");
	if (!canvas->win)
		exit(1);
	canvas->img.img = mlx_new_image(canvas->mlx,
			WIDTH, HEIGHT);
	if (!canvas->img.img)
		exit(1);
	canvas->img.addr = mlx_get_data_addr(canvas->img.img,
			&canvas->img.bits_per_pixel,
			&canvas->img.line_length, &canvas->img.endian);
	canvas->max_re = 2;
	canvas->max_im = 2;
	canvas->min_re = -2;
	canvas->min_im = -2;
	canvas->max_iter = DEFAULT_MAX_ITER;
	canvas->c_re = DEFAULT_JULIA_C_RE;
	canvas->c_im = DEFAULT_JULIA_C_IM;
	canvas->is_pressed_shift = false;
}
