/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:52:06 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 17:34:14 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_deque *a)
{
	int	tmp;

	if (a->size < 2)
		return ;
	tmp = a->top->data;
	a->top->data = a->top->prev->data;
	a->top->prev->data = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_deque *b)
{
	int	tmp;

	if (b->size < 2)
		return ;
	tmp = b->top->data;
	b->top->data = b->top->prev->data;
	b->top->prev->data = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_deque *a, t_deque *b)
{
	int	tmp;

	if (a->size < 2 || b->size < 2)
		return ;
	tmp = a->top->data;
	a->top->data = a->top->prev->data;
	a->top->prev->data = tmp;
	tmp = b->top->data;
	b->top->data = b->top->prev->data;
	b->top->prev->data = tmp;
	write(1, "ss\n", 3);
}
