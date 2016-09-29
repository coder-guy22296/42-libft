/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 14:44:10 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/26 13:56:07 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int index;

	index = 0;
	while (s1[index] == s2[index] && index < (int)n && s1[index] && s2[index])
	{
		if (index == (int)n - 1)
			return (0);
		index++;
	}
	if ((unsigned char)s1[index] > (unsigned char)s2[index])
		return (1);
	else if ((unsigned char)s1[index] < (unsigned char)s2[index])
		return (-1);
	else
		return (0);
}
