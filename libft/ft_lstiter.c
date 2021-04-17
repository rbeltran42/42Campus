/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:59:47 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/17 20:26:20 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *temp;

	temp = lst;
	if (temp)
	{
		while (temp)
		{
			f(temp->content);
			temp = temp->next;
		}
	}
	
}