/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:17:56 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/10 15:44:14 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
size_t ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}*/
char    *ft_strtrim(char const *s1, char const *set)
{
	int i;
	char *str;
	int x;
	str = (char*)malloc(sizeof(char) * (ft_strlen((char *)s1)+ 1));
	i = 0;
	x = 0;
	if(!set)
		return(0);
	while(s1[i])
	{
		if(s1[i] != (char)set)
		{
			str[x] = s1[i];
			x++;
		}
		i++;
	}
	str[i] = '\0';
	return(str);
}
/*
int main(void) {
	char line[15]="RRubRRenRRRR";
	ft_strtrim(line,(char const *)'R');

	return 0;
}*/