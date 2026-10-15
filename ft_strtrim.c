/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:30:17 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/14 15:37:49 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>


int strlne(const char *s)
{
    int i;
    i = 0;
    while (s[i])
        i++;
    return i;
}

int ft_contains(char c, char const *set)
{
    int i;
    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return 1;
        i++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int i2;
    int len;
    char    *res;
    
    i = 0;
    j = 0;
    len = strlne(s1) - 1;
    i2 = 0;
    while (ft_contains(s1[i], set))
    {
        i++;
    }
    while (ft_contains(s1[len - i2], set))
    {
        i2++;
    }
    res = malloc(sizeof(char) * (len - i - i2 + 1));
    
    while (i <= len - i2)
    {
        res[j] = s1[i];
        i++;
        j++;
    }
    res[j] = '\0';
    return res;
    
}

#include<stdio.h>

int main(void)
{
    printf("%s",ft_strtrim("","pisto"));   
}

