/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:05:34 by sozbek            #+#    #+#             */
/*   Updated: 2024/10/24 22:05:36 by sozbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s)
	{
		if (start >= ft_strlen(s) || len == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[i + start] != '\0')
			i++;
		str = (char *)malloc(i + 1);
		if (!str)
			return (NULL);
		str[i] = '\0';
		while (i--)
			str[i] = s[start + i];
		return (str);
	}
	return (NULL);
}
