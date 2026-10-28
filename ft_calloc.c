/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 23:10:03 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/28 00:05:14 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *calloc(size_t nmemb, size_t size)
{
    unsigned char	*res;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	res = malloc(nmemb * size);
	if (!res)
		return ((void *)0);
	ft_bzero(res, (nmemb * size));
	return (res);
}