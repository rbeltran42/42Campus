/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:34:16 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/12 16:23:19 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *strIn, int c)
{
	const char	*str;
	int			i;
	int			x;
	int			y;

	str = strIn;
	y = ft_strlen((char *)str);
	i = 0;
	x = 0;
	while (i < y + 1)
	{
		if (str[y] == c)
			return ((char *) str + y);
		y--;
	}
	return (NULL);
}
