/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:34:16 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/17 16:48:27 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *strIn, int c)
{
	const char	*str;
	int			i;
	int			x;
	int			y;
	char		z;

	z = c;
	str = strIn;
	y = ft_strlen((char *)str);
	i = 0;
	x = 0;
	while (i < y + 1)
	{
		if (str[y] == z)
			return ((char *) str + y);
		y--;
	}
	return (NULL);
}
