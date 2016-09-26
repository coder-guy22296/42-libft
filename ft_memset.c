/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 21:32:14 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/25 21:36:44 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *b, int c, size_t len)
{
    int             index;
    unsigned char   *ptr;

    index = 0;
    ptr = (unsigned char *)b;
    while (index < len)
    {
		ptr[index] = (unsigned char)c;
		index++;
    }
    return (b);
}
