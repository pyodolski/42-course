/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daeekim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:08:21 by daeekim           #+#    #+#             */
/*   Updated: 2024/05/15 16:08:25 by daeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);  
	if (c == '\0') 
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0); 
}

char	*ft_strjoin(char *left_str, char *buff) // 이어 붙임
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!left_str)
	{
		left_str = (char *)malloc(1 * sizeof(char));
		left_str[0] = '\0';
	}
	if (!left_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(left_str) + ft_strlen(buff)) + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	while (left_str[++i] != '\0')
		str[i] = left_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(left_str) + ft_strlen(buff)] = '\0';
	free(left_str);
	return (str);
}

char	*ft_get_line(char *left_str) // 한 줄만 새로운 문자열로 반환
{
	int		i;
	char	*str;

	i = 0;
	if (!left_str[i])
		return (NULL);
	while (left_str[i] && left_str[i] != '\n') // 한 줄 탐색
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2)); // 동적할당 하는데 +2 하는 이유는 개행과 NULL 때문
	if (!str)
		return (NULL);
	i = 0;
	while (left_str[i] && left_str[i] != '\n')
	{
		str[i] = left_str[i]; // 동적할당을 한 str에 복사
		i++;
	}
	if (left_str[i] == '\n') // 개행문자가 아닐 때까지 복사했으므로 개행문자가 있으면 복사해줌
	{
		str[i] = left_str[i];
		i++;
	}
	str[i] = '\0'; // 마지막에 널문자
	return (str);
}

char	*ft_new_left_str(char *left_str) // 이미 출력한 한 줄을 없애고 나머지 부분 반환
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (left_str[i] && left_str[i] != '\n')
		i++;
	if (!left_str[i])
	{
		free(left_str);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(left_str) - i)); // 널문자 넣기 위해 +1해서 동적할당
	if (!str)
		return (NULL);
	i++; // 개행문자에서 멈췄으니 한번더 밀어줌
	j = 0;
	while (left_str[i])
		str[j++] = left_str[i++]; // str을 left_str에 이식해줌
	str[j] = '\0'; // 마지막에 널문자
	free(left_str); // 더 이상 필요 없기 때문에 메모리 해제를 해줌
	return (str);
}