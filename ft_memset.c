/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:34:18 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/19 12:18:34 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
    unsigned char *p;
    
    *p = (unsigned char *)s;
    while (n > 0)
    {
        *p = (unsigned char)c;
        n--;
        p++;
    }

    return (s);
}