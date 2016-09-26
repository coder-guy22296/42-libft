/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 10:31:26 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/26 12:42:12 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_lib.h"

char    *ft_strcpy(char *dst, const char *src)
{
	int length;
	int index;

	length = ft_strlen(src);
	dst = (char *)malloc(sizeof(char) * (length + 1));
	dst[length] = '\0';
	index = 0;
	while (src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	return (dst);
}
