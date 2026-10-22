/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:02:24 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/22 13:23:17 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *destination;
    const unsigned char *source;
    size_t              i;

    if (!dest && !src)
        return (NULL);
    destination = (unsigned char *)dest;
    source = (const unsigned char *)src;
    if (destination == source || n == 0)
        return (dest);
    i = 0;
    while (i < n)
    {
        if (destination < source)
            destination[i] = source[i];
        else
            destination[n - 1 - i] = source[n - 1 - i];
        i++;
    }
    return (dest);
}