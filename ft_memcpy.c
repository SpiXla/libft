/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:28:58 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/22 13:07:34 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char    *destination;
    unsigned char    *source;
    size_t			i;

    i = 0;
    source = (unsigned char *)src;
    destination = (unsigned char *)dest;
    if (!n || dest == src)
        return (dest);
    while (i < n)
    {
        destination[i] = source[i];
        i++;
    }
    return (destination);
}