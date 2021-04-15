/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 19:33:32 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/12 17:14:31 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t l)
{
	char	*d;
	size_t	i;
	size_t	x;

	x = 0;
	i = 0;
	d = (char *)malloc(l + 1);
	if (!s || !d)
		return (0);
	while (s[i])
	{
		if (i >= start && x < l)
		{
			d[x] = s[i];
			x++;
		}
		i++;
	}
	d[x] = '\0';
	return (d);
}
