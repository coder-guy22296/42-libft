/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 11:40:26 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/26 11:36:40 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

char    *ft_strncpy(char *dst, const char *src, size_t len)
{
    int length;
    int index;

    length = ft_strlen(src);
    dst = (char *)malloc(sizeof(char) * (length + 1));
    index = 0;
    while (index <= length)
    {
		if (index <= len)        
			dst[index] = src[index];
		else
			dst[index] = '\0';
        index++;
    }
    return (dst);
}
