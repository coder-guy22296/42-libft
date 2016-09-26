/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 16:18:31 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/26 16:50:23 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_junk_filter(char *str)
{
	int has_sign;

	has_sign = 0;
	while (!ft_isdigit((int)*str))
	{
		if (*str == '+' || *str == '-')
			has_sign = 1;
		str++;
	}
	return (has_sign);
}

int	ft_atoi(const char *str)
{
	int		num;
	int		i;
	int		multiplier;
	int		sign;
	char	*ptr;

	i = 0;
	num = 0;
	multiplier = 1;
	ptr = (char *)str;
	sign = ft_junk_filter(ptr);
	while (ptr[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (ft_isdigit((int)ptr[i]))
		{
			num += multiplier * (ptr[i] - '0');
			multiplier *= 10;
		}
		i--;
	}
	return (num);
}
