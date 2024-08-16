/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:24:55 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/16 16:47:49 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	put_err_msg(char *str)
{
	ft_putstr_fd("Error: ", STDERR_FILENO);
	ft_putendl_fd(str, STDERR_FILENO);
}

int	put_err_msg_and_ret(char *str)
{
	put_err_msg(str);
	return (ERROR);
}

void	put_err_msg_and_exit(char *str)
{
	put_err_msg(str);
	exit(EXIT_FAILURE);
}
