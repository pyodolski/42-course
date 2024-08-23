#ifndef FRACTOL_H
# define FRACTOL_H

# include "./minilibx-linux/mlx.h"
# include "./libft/libft.h"
# include <X11/X.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdint.h>
# include <stdlib.h>
# include <math.h>
# include <stdbool.h>
# include <errno.h>
# include <string.h>

# define KEY_Q 113
# define KEY_ESC 65307
# define KEY_SHIFT 65505
# define KEY_L_ARROW 65361
# define KEY_UP_ARROW 65362
# define KEY_R_ARROW 65363
# define KEY_DW_ARROW 65364
# define SCROLL_UP 5
# define SCROLL_DOWN 4
# define MOUSE_RIGHT 1
# define MOUSE_CENTER 2
# define MOUSE_LEFT 3

# define WIDTH 800
# define HEIGHT 800
# define DEFAULT_MAX_ITER 100
# define DEFAULT_JULIA_C_RE 0.4
# define DEFAULT_JULIA_C_IM -0.325
# define MOVE_RATIO 0.01

typedef struct s_img {
	void		*img;
	char		*addr;
	int			bits_per_pixel;
	int			line_length;
	int			endian;
	int			width;
	int			height;
}				t_img;

enum e_fractal_type {
	FRACTAL_JULIA,
	FRACTAL_MANDELBROT,
};

typedef struct s_canvas	t_canvas;
typedef int				(*t_fractal_drawer)(t_canvas *canvas);

struct	s_canvas {
	void				*mlx;
	void				*win;
	t_img				img;
	t_fractal_drawer	fractal_drawer;
	bool				is_pressed_shift;
	double				min_re;
	double				min_im;
	double				max_re;
	double				max_im;
	int					max_iter;
	double				z_re;
	double				z_im;
	double				c_re;
	double				c_im;
	double				delta_re;
	double				delta_im;
};

// MLX
int			exit_canvas(t_canvas *canvas);
void		initialize_canvas(t_canvas *canvas);
uint32_t	get_color(t_img img, int x, int y);
void		my_mlx_pixel_put(t_img *img, int x, int y, int color);
int			key_press_hook(int keycode, t_canvas *canvas);
int			key_release_hook(int keycode, t_canvas *canvas);
int			mouse_hook(int button, int x, int y, t_canvas *canvas);

// fracal
int			draw_julia(t_canvas *canvas);
int			draw_mandelbrot(t_canvas *canvas);
int			draw_burningship(t_canvas *canvas);

// utils
uint32_t	rgb2hex(int r, int g, int b);
uint32_t	hsv2hex(double h, double s, double v);
double		abs_double(double val);

#endif
