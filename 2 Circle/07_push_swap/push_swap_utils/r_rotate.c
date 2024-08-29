/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:43:42 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 17:31:48 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_deque *a)
{
	if (a->size < 2)
		return ;
	push_top(a, a->bottom->data);
	pop_bottom(a);
	write(1, "rra\n", 4);
}

void	rrb(t_deque *b)
{
	if (a->size < 2)
		return ;
	push_top(b, b->bottom->data);
	pop_bottom(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_deque *b)
{
	if (a->size < 2 || b->size < 2)
		return ;
	push_top(a, a->bottom->data);
	pop_bottom(a);
	push_top(b, b->bottom->data);
	pop_bottom(b);
	write(1, "rrr\n", 4);
}
