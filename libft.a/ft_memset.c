/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:33:44 by jupyo             #+#    #+#             */
/*   Updated: 2024/03/01 17:42:41 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*new_dest;
	size_t			i;

	new_dest = (unsigned char *)dest;
	i = 0;
	while (i++ < n)
		*new_dest++ = src;
	return (dest);
}
