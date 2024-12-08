/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:02:58 by sozbek            #+#    #+#             */
/*   Updated: 2024/11/15 15:20:44 by sozbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	else if (src > dst)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (dst);
}
