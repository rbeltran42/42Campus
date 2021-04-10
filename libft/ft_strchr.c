/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:53:01 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/10 12:02:30 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *strIn, int c)
{
	const char	*str;
	int			i;
	size_t 		x;

	
	str = strIn;
	x = ft_strlen(str);
	i = 0;
	if(str[i] == 0)
		return (0);
	if(c == '\0')
		return ((char *)str + x);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)str + i);
		i++;
	}
	return (0);
}