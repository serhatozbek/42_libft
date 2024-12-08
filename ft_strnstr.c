/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:05:06 by sozbek            #+#    #+#             */
/*   Updated: 2024/11/15 15:44:33 by sozbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l_len;

	l_len = ft_strlen(needle);
	if (!l_len)
		return ((char *)haystack);
	while (*haystack && l_len <= len--)
	{
		if (!ft_memcmp(haystack, needle, l_len))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
