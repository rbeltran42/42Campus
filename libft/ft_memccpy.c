/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:23:33 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/12 15:53:38 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	const char		*s;
	size_t			i;

	i = 0;
	s = src;
	d = dest;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == (unsigned char) c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
