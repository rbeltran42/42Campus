/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:12:01 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/13 20:55:50 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		l1;
	int		l2;
	char	*str;

	if (s1 && s2)
	{
		l1 = ft_strlen((char *)s1);
		l2 = ft_strlen((char *)s2);
		str = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
		if (!str)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[l1] = s2[i];
			l1++;
		}
		str[l1] = '\0';
		return (str);
	}
	return (NULL);
}
