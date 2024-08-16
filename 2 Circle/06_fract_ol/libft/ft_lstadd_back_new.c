/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_new.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:41:12 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/16 16:41:27 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstadd_back_new(t_list **lst, void *content)
{
	t_list	*new_list;

	new_list = ft_lstnew(content);
	if (!new_list)
		return (NULL);
	ft_lstadd_back(lst, new_list);
	return (*lst);
}
