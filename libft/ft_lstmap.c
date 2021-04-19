/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:09:09 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/19 13:45:20 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*init_new_lst;
	t_list	*new_elem;

	if (!f || !lst)
		return (NULL);
	new_elem = ft_lstnew(f(lst->content));
	if (!new_elem)
	{
		return (NULL);
	}
	init_new_lst = new_elem;
	lst = lst->next;
	while (lst)
	{
		new_elem->next = ft_lstnew(f(lst->content));
		if (!new_elem->next)
		{
			ft_lstclear(&init_new_lst, del);
			return (NULL);
		}
		new_elem = new_elem->next;
		lst = lst->next;
	}
	return (init_new_lst);
}
