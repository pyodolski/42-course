/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:27:38 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/29 19:11:26 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_num2(int *num, int *sorted)
{
	write(1, "sa\n", 3);
	ft_free(num, sorted, 0);
}

void	sort_num3(t_deque *a)
{
	int	arr[3];

	arr[0] = a->top->data;
	arr[1] = a->top->prev->data;
	arr[2] = a->top->prev->prev->data;
	if (arr[0] == 0 && arr[1] == 2)
	{
		rra(a);
		sa(a);
	}
}

void	sort_num35(int size, t_deque *a, t_deque *b)
{
	if (size == 3)
		sort_num3(a);
	else if (size == 4)
		sort_num4(a, b, size);
	else
		sort_num5(a, b, size);
}
