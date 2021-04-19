/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 20:30:02 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/19 13:42:42 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*init;
	t_list	*temp;

	init = *lst;
	while (init)
	{
		temp = init;
		init = init->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}
