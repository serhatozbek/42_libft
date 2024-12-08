/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:04:16 by sozbek            #+#    #+#             */
/*   Updated: 2024/11/15 15:52:21 by sozbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1)
		return (0);
	result = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (0);
	while (s1[i])
		result[j++] = s1[i++];
	i = 0;
	if (!s2)
		return (result);
	while (s2[i])
		result[j++] = s2[i++];
	result[j] = '\0';
	return (result);
}
