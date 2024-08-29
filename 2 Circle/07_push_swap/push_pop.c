/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:50:24 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 12:26:22 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_bottom(t_deque *lst, int data)
{
	t_node	*new_node;
	t_node	*cur_bottom;

	new_node = get_node(data);
	if (lst->bottom == NULL)
	{
		lst->top = new_node;
		lst->bottom = new_node;
	}
	else
	{
		cur_bottom = lst->bottom;
		cur_bottom->prev = new_node;
		new_node->next = cur_bottom;
		lst->bottom = new_node;
	}
	lst->size++;
}

void	push_top(t_deque *lst, int data)
{
	t_node	*new_node;
	t_node	*cur_top;

	new_node = get_node(data);
	if (lst->top == NULL)
	{
		lst->top = new_node;
		lst->bottom = new_node;
	}
	else
	{
		cur_top = lst->top;
		cut_top->next = new_node;
		new_node->prev = cur_top;
		lst->top = new_node;
	}
	lst->size++;
}

void	pop_bottom(t_deque *lst)
{
	t_node	*cur_bottom;
	t_node	*new_bottom;

	cur_node = lst->bottom;
	if (cur_bottom == NULL)
		return ;
	else if (lst->size == 1)
	{
		lst->top = NULL;
		lst->bottom = NULL;
	}
	else
	{
		new_bottom = lst->bottom->next;
		new_bottom->prev = NULL;
		lst->bottom = new_bottom;
	}
	lst->size--;
	free (cur_bottom);
}

void	pop_top(t_deque *lst)
{
	t_deque	*cur_top;
	t_deque	*new_top;

	cur_top = lst->top;
	if (cur_top == NULL)
		return ;
	else if (lst->size == 1)
	{
		lst->top = NULL;
		lst->bottom = NULL;
	}
	else
	{
		new_top = lst->top->prev;
		new_top->next = NULL;
		lst->top = new_top;
	}
	lst->size--;
	free (cur_top);
}
