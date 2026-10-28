/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-bih <aait-bih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:39:57 by aait-bih          #+#    #+#             */
/*   Updated: 2026/10/23 16:45:18 by aait-bih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *tmp;
    if (!lst || !f)
        return (NULL);
    tmp = lst;
    while (tmp != NULL)
    {
        f(tmp->content);
        tmp = tmp->next;   
    }
}