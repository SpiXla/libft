/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:30:17 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/20 15:25:55 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_contains(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_contains(s1[start], set))
		start++;
	while (end > start && ft_contains(s1[end - 1], set))
		end--;
	res = malloc(end - start + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + start, end - start + 1);
	return (res);
}
