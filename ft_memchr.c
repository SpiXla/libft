/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:18:33 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/22 13:29:32 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *source;
    unsigned char target;
    size_t  i;

    i = 0;
    source = (const unsigned char *)s;
    target = (unsigned char)c;
    while (i < n)
    {
        if (source[i] == target)
            return (source + i);
        i++;
    }
    return (NULL);
}