/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:21:08 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/26 20:20:04 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    
    if (!*little)
        return ((char *)big);
    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
        while (big[i + j] && little[j] && (i + j) < len && big[i + j] == little[j])
            j++;
        
        if (little[j] == '\0')
            return ((char *)&big[i]);
        
        i++;
    }
    
    return (NULL);
}