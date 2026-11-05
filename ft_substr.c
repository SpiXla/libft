/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:40:05 by aait-bih          #+#    #+#             */
/*   Updated: 2026/11/05 22:13:25 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  j;
    char    *str;

    if (!s)
        return (NULL);
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;

    str = malloc(len + 1);
    if (!str)
        return (NULL);

    i = (size_t)start;
    j = 0;
    while (j < len && s[i])
    {
        str[j] = s[i];
        i++;
        j++;
    }
    str[j] = '\0';
    return (str);
}
