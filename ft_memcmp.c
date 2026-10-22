/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:32:41 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/22 13:39:13 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *source1;
    const unsigned char *source2;
    size_t  i;

    if (!n || !s1 || !s2)
        return (NULL);
    i = 0;
    source1 = (const unsigned char *)s1;
    source2 = (const unsigned char *)s2;
    while (i < n)
    {
        if (source1[i] != source2[i])
            return (source1[i] - source2[i]);
        i++;
    }
    return (0);
}