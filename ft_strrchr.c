/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:34:16 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/09 17:04:37 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *strIn, int c)
{
	const char	*str;
	int			i;
	int			x;
	int 		y;

	str = strIn;
	y = ft_strlen((char *)str);
	i = 0;
	x = -1;
	if (*str == '\0')
		return (0);
	if (c == '\0')
		return ((char *)str + y);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			x = i;
		i++;
	}
	if (x >= 0)
		return ((char *) str + x);
	return (0);
}
