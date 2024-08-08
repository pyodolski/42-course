/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:22:32 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/08 17:19:35 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);

int	ft_atoi(const char *str);
int	ft_isdigit(int c);
#endif
