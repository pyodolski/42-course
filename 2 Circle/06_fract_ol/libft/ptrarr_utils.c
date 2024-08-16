/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptrarr_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:44:14 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/16 16:44:16 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ptrarr_len(void **ptrarr)
{
	size_t	i;

	i = 0;
	while (ptrarr[i])
		i++;
	return (i);
}

void	free_ptrarr(void **ptrarr)
{
	size_t	i;

	i = 0;
	while (ptrarr[i])
	{
		free(ptrarr[i]);
		ptrarr[i] = NULL;
		i++;
	}
	free(ptrarr);
}

void	free_ptrarr_and_assign_null(void ***ptrarr)
{
	free_ptrarr(*ptrarr);
	*ptrarr = NULL;
}
