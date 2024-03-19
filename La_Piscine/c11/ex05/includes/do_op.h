/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:10:22 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/19 10:41:39 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include "unistd.h"

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	p_add(int a, int b);
void	p_sub(int a, int b);
void	p_mul(int a, int b);
void	p_div(int a, int b);
void	p_mod(int a, int b);

#endif
