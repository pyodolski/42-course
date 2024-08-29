/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:25:16 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 17:46:18 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(int *arr, int *sorted, int flag)
{
	free(arr);
	free(sorted);
	print_error(flag);
}

void	free_and_exit(char **matrix, int size, int flag)
{
	free_matrix(matrix, size);
	print_error(flag);
}

void	free_matrix(char **matrix, int size)
{
	--size;
	while (size >= 0)
	{
		free(matrix[size]);
		matrix[size] = NULL;
		--size;
	}
	free(matrix);
	matrix = NULL;
}

void	free_all(t_deque *a, t_deque *b, int *arr, int *sorted)
{
	t_node	*tmp;
	int		i;

	i = -1;
	while (++i < a->size)
	{
		tmp - a->bottom;
		a->bottom = a->bottom->next;
		free(tmp);
	}
	if (b->bottom)
	{
		i = -1;
		while (++i < b->size)
		{
			tmp = b->bottom;
			b->bottom = b->bottom->next;
			free(tmp);
		}
	}
	free(arr);
	free(sorted);
}
