/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:40:38 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/16 17:40:59 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	move_arrow_key(int keycode, t_canvas *canvas)
{
	if (keycode == KEY_UP_ARROW)
	{
		canvas->min_im -= (canvas->max_im - canvas->min_im) * MOVE_RATIO;
		canvas->max_im -= (canvas->max_im - canvas->min_im) * MOVE_RATIO;
	}
	if (keycode == KEY_DW_ARROW)
	{
		canvas->min_im += (canvas->max_im - canvas->min_im) * MOVE_RATIO;
		canvas->max_im += (canvas->max_im - canvas->min_im) * MOVE_RATIO;
	}
	if (keycode == KEY_R_ARROW)
	{
		canvas->min_re += (canvas->max_re - canvas->min_re) * MOVE_RATIO;
		canvas->max_re += (canvas->max_re - canvas->min_re) * MOVE_RATIO;
	}
	if (keycode == KEY_L_ARROW)
	{
		canvas->min_re -= (canvas->max_re - canvas->min_re) * MOVE_RATIO;
		canvas->max_re -= (canvas->max_re - canvas->min_re) * MOVE_RATIO;
	}
}

int	key_press_hook(int keycode, t_canvas *canvas)
{
	if (keycode == KEY_ESC)
		exit_canvas(canvas);
	if (keycode == KEY_SHIFT)
		canvas->is_pressed_shift = true;
	if (keycode == KEY_UP_ARROW || keycode == KEY_DW_ARROW
		|| keycode == KEY_L_ARROW || keycode == KEY_R_ARROW)
		move_arrow_key(keycode, canvas);
	return (0);
}

int	key_release_hook(int keycode, t_canvas *canvas)
{
	if (keycode == KEY_SHIFT)
		canvas->is_pressed_shift = false;
	return (0);
}
