/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 16:18:31 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/26 11:54:04 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)///NO ERROR condtions handled test + fix req!
{
	int	num;
	int	i;
	int	multiplier;

	i = 0;
	num = 0;
	multiplier = 1;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		num += multiplier * (str[i] - '0');
		multiplier *= 10;
		i--;
	}
	return (num);
}
