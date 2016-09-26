/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 20:18:59 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/26 11:38:50 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int 			index;
	unsigned char 	*src_ptr;
    unsigned char   *dst_ptr;
	unsigned char	*new_dst;
	unsigned char	*old_data;
	
	index = 0;
	src_ptr = (unsigned char *)src;
    dst_ptr = (unsigned char *)dst;
	new_dst  = (unsigned char *)malloc(len);
	old_data = (unsigned char *)malloc(len);
	while (index < len)
	{
		new_dst[index] = src_ptr[index];
		old_data[index] = dst_ptr[index];
		index++;
	}
	dst = new_dst;
	return (old_data);
}
