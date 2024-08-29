/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:29:23 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 18:39:18 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*get_node(int data)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (new == NULL)
		return (0);
	new->data = data;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	init_deque(t_deque *b, int **sorted)
{
	b->bottom = NULL;
	b->top = NULL;
	b->size = 0;
	*sorted = NULL;
}

void	insert_idx(int data, int idx, t_deque *a)
{
	t_node	*cur;

	cur = a->bottom;
	while (cur != NULL)
	{
		if (cur->data == data)
		{
			cur->data = idx;
			return ;
		}
		cur = cur->next;
	}
}

void	make_deq_a(t_deque *a, int *arr, int *sorted, int size)
{
	int	i;

	a->top = NULL;
	a->bottom = NULL;
	a->size = 0;
	i = -1;
	while (++i < size)
		push_top(deque, arr[i]);
	i = -1;
	while (++i < size)
		inset_idx(sorted[i], i, a);
}
