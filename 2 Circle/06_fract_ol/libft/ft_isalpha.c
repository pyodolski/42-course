/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:48:05 by jupyo             #+#    #+#             */
/*   Updated: 2024/03/01 14:56:18 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*

#include <stdio.h>

int ft_isalpha(int c);
int main() {
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);
    
    if (ft_isalpha(input)) {
        printf("The character is an alphabet.\n");
    } else {
        printf("The character is not an alphabet.\n");
    }
    
    return 0;
}

*/
