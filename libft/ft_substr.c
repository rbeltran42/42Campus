/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 19:33:32 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/19 15:46:07 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_malloc(char const *s, unsigned int start, size_t l)
{
	size_t	i;
	int		sz;
	size_t	x;

	x = 0;
	i = 0;
	sz = 0;
	while (s[i])
	{
		if (i >= start && x < l)
		{
			sz++;
			x++;
		}
		i++;
	}
	return (sz);
}

char	*ft_substr(char const *s, unsigned int start, size_t l)
{
	char	*d;
	size_t	i;
	size_t	x;

	x = 0;
	i = 0;
	if (!s)
		return (NULL);
	d = malloc(sizeof(char) * (size_malloc(s, start, l) + 1));
	if (!d)
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
