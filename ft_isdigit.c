/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 23:59:41 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/23 00:20:19 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int main()
{
	int i;

	i = 0;
	i = ft_isdigit('9');
	printf("%d", i);
	i = ft_isdigit('5');
	printf("%d", i);
	i = ft_isdigit('0');
	printf("%d", i);
	i = ft_isdigit(' ');
	printf("%d", i);
	i = ft_isdigit('z');
	printf("%d", i);
	return (0);
}
