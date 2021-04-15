/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 11:27:32 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/12 15:51:18 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					neg;
	unsigned long long	num;

	i = 0;
	num = 0;
	neg = 1;
	while ((str[i] == 32) || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			neg = neg * -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	if (num - 1 > 9223372036854775807 && neg < 0)
		return (0);
	if (num > 9223372036854775807 && neg > 0)
		return (-1);
	return (num * neg);
}
