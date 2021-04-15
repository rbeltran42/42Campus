/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:55:06 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/15 18:15:18 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


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
	tab = ft_calloc(ft_strlen(s), sizeof(char *));
	if (!tab)
		return (NULL);
	while (++i < (int)ft_strlen(s))
	{	
		if (s[i] != c && s[i] != '\0')
		{
			x = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			tab[j] = ft_substr(s, x, i - x);
			if (s[i + 1] != '\0')
				j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}
