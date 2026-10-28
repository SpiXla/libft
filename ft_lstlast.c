/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:17:18 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/23 16:21:36 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
   t_list *tmp;

    if (lst == NULL)
        return (NULL);
    tmp = lst;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
   return tmp;
}