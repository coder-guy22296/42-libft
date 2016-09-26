/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 13:00:16 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/26 12:43:49 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		index;

	ptr = NULL;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			ptr = (char *)&s[index];
		index++;
	}
	if (s[index] == (char)c)
		ptr = (char *)&s[index];
	return (ptr);
}
