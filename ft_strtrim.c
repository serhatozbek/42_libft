/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:05:27 by sozbek            #+#    #+#             */
/*   Updated: 2024/10/24 22:05:29 by sozbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_check(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;
	size_t	j;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_check(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	while (len > i && s1[len - 1] && ft_check(set, s1[len - 1]))
		len--;
	len = len - i;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (len--)
	{
		str[j++] = s1[i++];
	}
	str[j] = '\0';
	return (str);
}
