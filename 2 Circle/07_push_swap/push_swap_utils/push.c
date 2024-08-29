/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:27:19 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 17:29:09 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_deque *a, t_deque *b)
{
	if (b->size == 0)
		return ;
	push_top(a, b->top->data);
	pop_top(b);
	write(1, "pa\n", 3);
}

void	pb(t_deque *a, t_deque *b)
{
	if (a->size == 0)
		return ;
	push_top(b, a->top->data);
	pop_top(a);
	write(1, "pb\n", 1);
}
