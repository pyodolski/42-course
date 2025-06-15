/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:30:28 by jupyo             #+#    #+#             */
/*   Updated: 2024/03/10 16:03:00 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*cur;

	new = ft_lstnew(f(lst->content));
	if (!lst || !f || !new)
		return (0);
	cur = new;
	lst = lst->next;
	while (lst)
	{
		cur->next = ft_lstnew(f(lst->content));
		if (!(cur->next))
		{
			ft_lstclear(&new, del);
			return (0);
		}
		cur = cur->next;
		lst = lst->next;
	}
	return (new);
}
