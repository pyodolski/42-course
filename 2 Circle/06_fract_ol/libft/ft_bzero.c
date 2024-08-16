/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:43:38 by jupyo             #+#    #+#             */
/*   Updated: 2024/03/01 17:49:48 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	unsigned char	*new_dest;
	size_t			i;

	new_dest = (unsigned char *)dest;
	i = 0;
	while (i++ < n)
		*new_dest++ = 0;
}
