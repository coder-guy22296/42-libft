/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/09 16:00:05 by cyildiri          #+#    #+#             */
/*   Updated: 2016/10/09 16:25:43 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int sign;

	sign = ft_pop_sign(&n);
	if (n >= 1)
	{
		ft_putnbr(n / 10);
		if (sign)
			ft_putchar('-');
		else
			ft_putchar((n % 10) + '0');
	}
}