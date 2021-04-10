/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:45:34 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/09 17:26:16 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == 0 && src == 0)
		return (0);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
		while (n--){
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
		}
	return (dest);
}