/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:04:24 by sozbek            #+#    #+#             */
/*   Updated: 2024/11/15 15:39:59 by sozbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dst[d] && d < dstsize)
		d++;
	while (src[s] && d + s + 1 < dstsize)
	{
		dst[d + s] = src[s];
		s++;
	}
	if (d < dstsize)
		dst[d + s] = '\0';
	return (d + ft_strlen(src));
}
