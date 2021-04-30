/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:53:01 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/20 17:33:23 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *strin, int c)
{
	int			i;
	int			x;
	char		y;

	y = c;
	x = ft_strlen(strin);
	i = 0;
	while (i < x + 1)
	{
		if (strin[i] == y)
			return ((char *)strin + i);
		i++;
	}
	return (NULL);
}
