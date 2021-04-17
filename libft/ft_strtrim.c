/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:17:56 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/17 16:53:01 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	size_str(char const *s1, char const *set)
{
	int			i;
	size_t		len;
	size_t		lenT;

	i = 0;
	lenT = ft_strlen(s1);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
		i++;
	}
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
	{
		len--;
		i++;
	}
	i = (lenT - i);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char		*str;

	if (!s1 || !set)
		return (NULL);
	str = NULL;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	str = ft_substr((char *)s1, 0, len + 1);
	return (str);
}
