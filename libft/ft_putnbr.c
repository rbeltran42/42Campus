/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:08:20 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/14 11:16:55 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
		}
		else if (nb > 9)
		{
			ft_putnbr((nb / 10));
			ft_putchar((nb % 10) + 48);
		}
		else if (nb <= 9 && nb >= 0)
		{
			ft_putchar(nb + 48);
		}
		else if (nb < 0 && nb != -2147483648)
		{
			nb = nb * -1;
			ft_putchar('-');
			ft_putnbr(nb);
		}
	}
}
