/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 12:31:35 by cyildiri          #+#    #+#             */
/*   Updated: 2016/10/12 12:42:49 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *current;
	t_list *output;

	current = lst;
    while (current)
    {
		ft_lstadd(&output, f(current));
        if (current->next)
            current = current->next;
	}
	return (output);
}
