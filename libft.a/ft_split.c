/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:56:56 by jupyo             #+#    #+#             */
/*   Updated: 2024/03/03 19:42:05 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*result;
	size_t	i;

	result = (char *)malloc(sizeof(char) * (n + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < n)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

void	ft_free(char **str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	cnt;
	char	**result;

	cnt = ft_count(s, c);
	result = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!result || s == 0)
		return (0);
	i = 0;
	while (i < cnt)
	{
		while (*(s) && *(s) == c)
			s++;
		result[i] = ft_strndup(s, ft_wordlen(s, c));
		if (!result[i++])
		{
			ft_free(result, i);
			return (NULL);
		}
		s += ft_wordlen(s, c);
	}
	result[cnt] = '\0';
	return (result);
}
