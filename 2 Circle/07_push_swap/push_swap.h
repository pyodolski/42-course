/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:02:11 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/28 22:22:31 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>

typedef struct h_node
{
	int				data;
	struct h_node	*prev;
	struct h_node	*next;
}	t_node;

typedef struct h_deque
{
	int		size;
	t_node	*top;
	t_node	*bottom;
}	t_deque;
