/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:59:25 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/08 18:02:54 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int			i;
	const char	*strSeach;

	strSeach = str;
	i = 0;
	while (n-- > 0)
	{
		if (strSeach[i] == c)
			return ((void *) strSeach + i);
		i++;
	}
	return (0);
}
