/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:22:39 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/12 17:28:18 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= -2147483648 && n <= 2147483647)
	{
		if (n == -2147483648)
		{
			ft_putchar_fd('-', fd);
			ft_putchar_fd('2', fd);
			ft_putnbr_fd(147483648, fd);
		}
		else if (n > 9)
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putchar_fd((n % 10) + 48, fd);
		}
		else if (n <= 9 && n >= 0)
		{
			ft_putchar_fd(n + 48, fd);
		}
		else if (n < 0 && n != -2147483648)
		{
			n = n * -1;
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(n, fd);
		}
	}
}
