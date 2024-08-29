/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hourglass.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 21:15:51 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 21:48:25 by pyodolski        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	max_push_b(t_node *node, t_deque *a, int size)
{
    int	i;
    int	flag;

    i = 0;
    flag = 0;
    while (flag == 0)
    {
	if (node->data == size - 1)
	{
	    if (i > size - i - 1)
	    {
		while (i++ != size)
		    rra(a);
	    }
	    else
		while (i-- > 0)
		    ra(a);
	    break ;
	}
	i++;
	node = node->next;
	if (node == a->top)
	    flag = 1;
    }
}
