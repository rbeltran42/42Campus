/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:58:23 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/17 16:56:33 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*begin;

	begin = NULL;
	if (lst)
	{
		begin = *lst;
		if (begin == NULL)
			*lst = new;
		else
		{
			if (new)
			{
				begin = ft_lstlast(*lst);
				begin->next = new;
			}
		}
	}
}
