/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:50:04 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 13:51:04 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_deque *a)
{
	if (a->size < 2)
		return ;
	push_top(a, a->bottom->data);
	pop_bottom(a);
	write(1, "ra\n", 3);
}

void	rb(t_deque *b)
{
	if (b->size < 2)
		return ;
	push_top(b, b->bottom->data);
	pop_bottom(b);
	write(1, "rb\n", 3);
}

void	rr(t_deque *a, t_deque *b)
{
	if (a->size < 2 || b->size < 2)
		return ;
	push_top(a, a->bottom->data);
	pop_bottom(a);
	push_top(b, b->bottom->data);
	pop_bottom(b);
	write(1, "rr\n", 3);
}
