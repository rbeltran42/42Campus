/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:25:26 by rbeltran          #+#    #+#             */
/*   Updated: 2021/04/09 19:58:13 by rbeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int i;

	i = -1;
	if (!dst && !src)
		return (0);
	if(dstsize-- == 0)
		return (ft_strlen(src));
	while (dstsize > (size_t)++i && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}