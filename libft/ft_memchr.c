/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:59:25 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/17 16:47:39 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int			i;
	const char	*strSeach;
	char		x;

	x = c;
	i = 0;
	strSeach = str;
	while (n-- > 0)
	{
		if (strSeach[i] == x)
			return ((void *) strSeach + i);
		i++;
	}
	return (0);
}
