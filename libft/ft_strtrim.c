/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:17:56 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/10 21:12:13 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int i;
	int len;
	int x;
	x = 0;
	i = 0;
	len = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (0);
	str = (char *)malloc(sizeof(char) * 20);
	while (!s1[i])
	{
		if (s1[i] != (char)set)
			printf("Premio \n");
		i++;
	}
	while (s1[len] == set)
		len--;
	i--;

	printf("tamano malloc >>>%d\n", (len - i));
	while (++i < (len - 1))
		str[x] = 'a';
	printf("valor i >>>>%d", i);
	str[i] = '\0';
	return ((char *)str);
}

int main(void)
{
	char line[20] = "RRubaaaaaaRRenRRRR";
	printf("----> %s\n", ft_strtrim(line, (char const *)'R'));

	return 0;
}