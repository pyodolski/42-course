/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 23:22:32 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 18:39:53 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pusg_swap.h"

void	print_error(int type)
{
	if (type >= 1)
		write(1, "Error\n", 6);
	exit(1);
}

int	fet_matrix_size(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		++i;
	return (i + 1);
}
