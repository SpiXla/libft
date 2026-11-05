/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 16:49:26 by aait-bih          #+#    #+#             */
/*   Updated: 2026/11/04 11:47:56 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;
	int		len;

	nb = n;
	len = count_digits(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		result[0] = '0';
	while (nb > 0)
	{
		result[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (result);
}
