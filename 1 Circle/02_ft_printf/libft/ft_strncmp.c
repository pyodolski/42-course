/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:32:03 by jupyo             #+#    #+#             */
/*   Updated: 2024/03/10 14:11:03 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	i = 0;
	if (!s1 || !s2)
		return (0);
	while (n--)
	{
		if (b1[i] != b2[i] || b1[i] == '\0' || b2[i] == '\0')
			return (b1[i] - b2[i]);
		i++;
	}
	return (0);
}
