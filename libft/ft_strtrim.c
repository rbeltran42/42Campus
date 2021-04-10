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
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char    *ft_strtrim(char const *s1, char const *set)
{
	int i;
	char *str;
	int x;
	
	i = 1;
	x = 0;
	if(!s1)
		return(0);
	str = (char*)malloc(sizeof(char) * (ft_strlen((char *)s1)+ 1));
	if(!set || !str)
		return(0);
	while (s1[++i] == (char)set)
		i++;
	while(s1[i])
	{
		str[x] = s1[i];
		i++;
		x++;
	}
	str[x] = '\0';
	return((char *)str);
}
    
int main(void) {
	char line[20]="RRubaaaaaaRRenRRRR";
	printf("%s",ft_strtrim(line,(char const *)'R'));

	return 0;
}