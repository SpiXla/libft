/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:32:08 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/19 13:38:48 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    size_t i;
    i = ft_strlen(s);
    
    while (i >= 0)
    {
        if ((char)c == s[i])
            return (char *)(s + i);
        i--;
    }
    return (NULL);
}