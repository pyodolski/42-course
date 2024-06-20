/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:41:49 by jupyo             #+#    #+#             */
/*   Updated: 2024/03/29 15:26:21 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>
# include <stdbool.h>

int		ft_printf(const char *__format, ...);
int		print_str(char const *str);
int		print_ptr(void *ptr_addr);
int		print_int(int n);
int		print_unsigned(unsigned int nbr);
int		print_hexa(unsigned int nbr, bool upper_case);

#endif
