/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:55:06 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/17 17:02:23 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_pieces(char const *s, char c)
{
	int		i;
	size_t	sz;

	i = -1;
	sz = 0;
	while (++i < (int)ft_strlen(s))
	{
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			sz++;
		}
	}
	return (sz);
}

char	**ft_split(char const *s, char c)
{
	char		**tab;
	int			i;
	int			x;
	int			j;

	i = -1;
	j = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * num_pieces(s, c) + 4);
	if (!tab)
		return (NULL);
	while (++i < (int)ft_strlen(s))
	{
		if (s[i] != c && s[i] != '\0')
		{
			x = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			tab[j++] = ft_substr(s, x, i - x);
		}
	}
	tab[j] = NULL;
	return (tab);
}
