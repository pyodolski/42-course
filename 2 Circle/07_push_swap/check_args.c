/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 23:20:01 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 18:40:23 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dup(int *num, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = i + 1;
		while (i < size)
		{
			if (num[i] == num[j])
			{
				free(num);
				print_error(1);
			}
			++j;
		}
	}
}

int	get_nums_count(char **av)
{
	int		i;
	int		j;
	char	**tmp;
	int		len;

	i = 0;
	len = 0;
	while (av[++i])
	{
		tmp = ft_spilt(av[i], ' ');
		if (!tmp)
			print_error(1);
		else if (tmp[0] == NULL)
			free_matrix(tmp, 1);
		else
		{
			j = -1;
			while (tmp[++j])
				check_num(tmp[j], tmp, &len);
			free_matrix(tmp, get_matrix_size(tmp));
		}
	}
	return (len);
}

int	check_args(int ac, char **av)
{
	int	cnt;

	cnt = 0;
	if (ac < 2)
		print_error(0);
	cnt = get_nums_count(av);
	if (cnt == 0)
		print_error(1);
	return (cnt);
}
