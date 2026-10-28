/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:04:37 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/23 16:17:03 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    unsigned int i;
    t_list *temp;

    i = 0;
    temp = lst;
    if (temp == NULL)
        return (0);
    while (temp->next != NULL)
    {
        i++;
        temp = temp->next;
    }
    return (i + 1);
}