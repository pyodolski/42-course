/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_digit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:51:42 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/16 16:51:45 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_digit(int n)
{
	int		digit;

	if (n == 0)
		return (1);
	digit = 0;
	while (n)
	{
		digit++;
		n /= 10;
	}
	return (digit);
}
