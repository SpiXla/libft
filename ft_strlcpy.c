/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 20:21:28 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/27 21:32:32 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  slen;
    size_t  i;
    
    i = 0;
    slen = ft_strlen(src);
    if (size == 0)
        return (slen);
    while (src[i] && (i < size - 1))
    {
        dst[i] = src[i]; 
        i++;
    }
    dst[i] = '\0';
    return (slen);
}