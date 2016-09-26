/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 14:15:39 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/26 14:23:02 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr;
	int		index;
	size_t	i;

	index = 0;
	i = 0;
	while (big[index] != '\0')
	{
		if (big[index] == little[i] && little[i] != '\0')
		{
			if (i == 0)
				ptr = (char *)&big[index];
			else if (i == len - 1)
				return (ptr);
			i++;
		}
		else
			i = 0;
		index++;
	}
	return (NULL);
}
