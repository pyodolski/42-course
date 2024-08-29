/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:55:52 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 18:14:12 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_num_2(const char *str)
{
	if (*str == '-' || *str == '+')
	{
		str++;
		if (*str == '-' || *str == '+' || *str == '\0' || *str == '0')
			return (0);
	}
	return (1);
}

int	check_num_1(const char *str)
{
	int			len;
	int			sign;
	long long	res;

	len = 0;
	sign = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
		len++;
	}
	res = res * sign;
	if (*str != '\0' || len > 10 \
			|| res > 2147483647 || res < -2147483648)
		return (0);
	return (1);
}

void	check_num(char *num, char **temp, int *nums_count)
{
	*nums_count += 1;
	if (!check_num1(num) || !check_num2(num))
		free_and_exit(temp, get_matrix_size(temp), 1);
}
