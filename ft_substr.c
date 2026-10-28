/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:40:05 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/28 16:12:53 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  j;
    char    *str;

    if (start >= ft_strlen(s))
		return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
    i = (size_t)start;
    j = 0;
    str = malloc(ft_strlen(s) + 1);
    while (j < len && i < ft_strlen(s))
    {
        str[j] = s[i];
        i++;
        j++;
    }
    str[i] = '\0';
	return (str);
}