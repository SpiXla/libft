/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:11:24 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/29 12:55:42 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

 int		ft_atoi(const char *nptr)
 {
    int	i;
	int	res;
	int	sign;

	if (!nptr)
		return (0);
	i = 0;
	res = 0;
	sign = 1;
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]) == 1)
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
 }