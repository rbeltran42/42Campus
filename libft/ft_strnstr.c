/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:41:08 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/12 17:37:33 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*find == '\0')
		return ((char *)s);
	while (s[i] && i < len)
	{
		j = 0;
		while (find[j] == s[i + j] && i + j < len)
		{
			if (find[j + 1] == '\0')
				return ((char *)s + i);
			j++;
		}
		i++;
	}
	return (0);
}
