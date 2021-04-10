/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:39:00 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/08 17:12:58 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*dest;

	dest = malloc(nitems * size);
	if (dest == 0)
		return (0);
	ft_bzero (dest, size * nitems);
	return (dest);
}
