/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:40:33 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/19 16:06:26 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*wr_str(char *str, long un, int i)
{
	while (un)
	{
		str[i--] = 48 + (un % 10);
		un = un / 10;
	}
	return (str);
}

static	int	len_nu(long int n)
{	
	int	len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	if (n == 0)
		len++;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	un;

	un = n;
	i = len_nu(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		str[1] = '\0';
		return (str);
	}
	if (un < 0)
	{
		str[0] = '-';
		un = un * -1;
	}
	wr_str(str, un, i);
	return (str);
}
