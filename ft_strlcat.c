/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 21:22:17 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/27 21:27:22 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  dlen;
    size_t  slen;
    
    dlen = ft_strlen(dst);
    slen = ft_strlen(src);
    if (dlen > size)
        return (size + slen);
    i = 0;
    j = dlen;
    while (src[i] && i < size - 1 - dlen)
    {
        dst[j] = src[i];
        i++;
        j++;
    }
    dst[j] = '\0';
    return (slen + dlen);
}