/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 21:35:35 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/28 00:08:32 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *res;
    size_t  len;   
    
    len = ft_strlen(s);
    res = malloc(len + 1);
    if (!res)
        return ((void *)0);   
    ft_memcpy(res, s, len + 1);
    return (res);
}