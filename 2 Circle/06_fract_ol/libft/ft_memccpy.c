/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:52:42 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/16 16:53:17 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	size_t			idx;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	idx = 0;
	while (idx < n)
	{
		dest_ptr[idx] = src_ptr[idx];
		if (src_ptr[idx] == (unsigned char)c)
			return (dest_ptr + idx + 1);
		idx++;
	}
	return (NULL);
}
