/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:58:48 by jupyo             #+#    #+#             */
/*   Updated: 2024/03/02 16:09:07 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*result;
	size_t	s_len;
	size_t	i;

	if (str == NULL)
		return (0);
	s_len = ft_strlen(str);
	if (s_len < start)
		return (ft_strdup(""));
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	i = 0;
	while (i < len && i < s_len - start)
	{
		result[i] = str[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
