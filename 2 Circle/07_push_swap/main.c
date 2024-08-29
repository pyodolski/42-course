/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:23:48 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 17:51:39 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		len;
	int		*arr;
	int		*sorted;
	t_deque	a;
	t_deque	b;


	init_deque(&b, *sorted);
	len = check_args(ac, av);
	arr = get_nums(len, av);
	check_dup(arr, len);
	if (is_sorted(arr, len))
		ft_free(arr, sorted, 0);
	sorted = copy_sorted(arr, len);
	if (len == 2)
		sort_num2(arr, sorted);
	else if (len >= 3)
	{
		make_deq_a(&a, arr, sorted, len);
		if (len >= 3 && len <= 5)
			sort_num35(len, &a, &b);
		else
			hourglass(&a, &b, len);
	}
	free_all(&a, &b, arr, sorted);
	return (0);
}

