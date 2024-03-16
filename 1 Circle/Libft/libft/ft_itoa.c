/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:52:55 by jupyo             #+#    #+#             */
/*   Updated: 2024/03/08 14:31:02 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digits(int n)
{
    size_t i = 0; // 초기값을 0으로 설정

    // 예외 처리: n이 0일 때
    if (n == 0)
        return 1;

    while (n != 0) {
        n /= 10;
        i++;
    }

    return i;
}

char	*ft_itoa(int n)
{
	char		*str_num;
	size_t		digits;
	long long	num;

	
	num = n;
	digits = get_digits(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str_num = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str_num)
		return (NULL);
	*(str_num + digits) = 0;
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
}



// #include <stdio.h>
// #include <stdlib.h>

// // ft_itoa 함수 복사

// int main(void)
// {
//     int test_cases[] = {0, 100};
//     int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

//     for (int i = 0; i < num_cases; ++i)
//     {
//         int number = test_cases[i];
//         char *str = ft_itoa(number);
//         if (str)
//         {
//             printf("Integer: %d, String: %s\n", number, str);
//             free(str); // 동적으로 할당된 메모리를 해제
//         }
//         else
//         {
//             printf("메모리 할당 실패.\n");
//         }
//     }

//     return 0;
// }
