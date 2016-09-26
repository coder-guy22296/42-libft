/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 19:43:55 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/25 20:07:56 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int 			index;
	unsigned char	ptr1;
	unsigned char 	ptr2;

	index = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (index < n && ptr1[index] == ptr2[index])
		index++;
	if (n == 0)
		return (0);
	else if (ptr1[index] != ptr2[index])
		return ((int)ptr1[index] - (int)ptr2[index]);
	else
		return (0);
}
