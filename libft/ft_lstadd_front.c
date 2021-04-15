/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:22:19 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/13 20:26:46 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list *str;

	str = (t_list **)malloc(sizeof(t_list));
	if(!alst)
		return (str = NULL);
	str->next = 0;
	str->content = new;
	return (str);	
}