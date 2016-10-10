/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/09 14:22:36 by cyildiri          #+#    #+#             */
/*   Updated: 2016/10/09 14:56:36 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		index;
	double	tmp;
	char	*out_str;
	int		sign;

	len = ft_count_digits(n);
	tmp = (double)n;
	sign = ft_pop_sign(&tmp);
	if(!(out_str = ft_strnew(len + sign)))
		return (NULL);
	index = (len + sign) - 1;
	while (index > 0)
	{
		out_str[index] = (tmp % 10) + '0';
		tmp /= 10;
		index--;
	}
	if (sign)
		out_str[index] = '-';
	else
		out_str[index] = (tmp % 10) + '0';
	return (out_str);
}
