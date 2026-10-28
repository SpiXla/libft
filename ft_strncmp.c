/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:13:57 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/26 19:19:51 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while ((s1[i] || s2[i]) && (i < n))
    {
        if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return (0);
}