/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:22:50 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 18:40:10 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	while (++i < size - 1)
	{
		j = -1;
		while (++j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int	*copy_sorted(int *arr, int size)
{
	int	*sorted;
	int	i;

	i = -1;
	sorted = (int *)malloc(sizeof(int) * size);
	if (!sorted)
	{
		free(arr);
		print_error(1);
	}
	while (++i < size)
		sorted[i] = arr[i];
	bubble_sort(sorted, size);
	return (sorted);
}

int	is_sorted(int *arr, int size)
{
	int	i;

	i = 0;
	if (size < 2)
		ft_free(arr, NULL, 0);
	while (++i < size)
	{
		if (arr[i] <= arr[i - 1])
			return (0);
	}
	return (1);
}

int	*get_nums(int nums_cnt, char **av)
{
	int		*num;
	char	**tmp;
	int		idx[3];

	idx[0] = 0;
	idx[2] = -1;
	num = (int *)malloc(sizeof(int) * num_cnt);
	if (!num)
		print_error(1);
	while (av[++idx[0]])
	{
		tmp = ft_split(av[idx[0]], ' ');
		if (!tmp)
			print_error(1);
		else if (tmp[0] == NULL)
			free_matrix(tmp, 1);
		else
		{
			idx[1] = -1;
			while (tmp[++idx[1]])
				num[++idx[2]] = ft_atoi(tmp[idx[1]]);
			free_matrix(tmp, get_matrix_size(tmp));
		}
	}
	return (num);
}
