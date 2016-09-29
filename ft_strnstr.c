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
#include "ft_lib.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr;
	int		index;

	index = 0;
	if (*little == '\0')
		return ((char *)big);
	while (index < (int)len)
	{
		if (big[index] == little[0])
		{
			ptr = (char *)&big[index];
			if (ft_strlen(little) <= (int)len - index)
				if (!ft_memcmp(ptr, little, ft_strlen(little)))
					return (ptr);
		}
		index++;
	}
	return (NULL);
}
