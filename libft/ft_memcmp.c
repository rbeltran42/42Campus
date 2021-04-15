/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:26:45 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/12 15:55:33 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	const char		*s1;
	const char		*s2;

	s1 = str1;
	s2 = str2;
	i = 0;
	if (n == 0)
		return (0);
	while (n != 0)
	{
		if (s1[i] != s2[i])
			return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
		i++;
		n--;
	}
	return (0);
}
