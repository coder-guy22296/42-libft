/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 20:47:48 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/26 12:50:02 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h> //dont use malloc

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t			index;
    unsigned char 	*src_ptr;
    unsigned char 	*dst_ptr;
    unsigned char 	*old_data;

    index = 0;
    src_ptr = (unsigned char *)src;
    dst_ptr = (unsigned char *)dst;
    old_data = (unsigned char *)malloc(n);
    while (index < n)
    {
		dst_ptr[index] = src_ptr[index];
        old_data[index] = dst_ptr[index];
		index++;
    }
    return (old_data);
}
