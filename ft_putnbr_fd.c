/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/09 17:02:21 by cyildiri          #+#    #+#             */
/*   Updated: 2016/10/09 19:38:59 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int sign;

	sign = ft_pop_sign(&n);
	if (tmp > 1)
	{
		ft_putnbr(tmp / 10);
		if (sign)
			ft_putchar_fd('-', fd);
		else
			ft_putchar_fd((tmp % 10) + '0', fd);
	}
}
