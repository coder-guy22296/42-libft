/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 12:26:16 by cyildiri          #+#    #+#             */
/*   Updated: 2016/10/12 12:30:51 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *current;
	
	current = lst;
	while (current)
	{
		f(current);
		if (current->next)
			current = current->next;
	}
}
