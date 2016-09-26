/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 17:09:35 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/25 18:23:17 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	int		index;

	ptr = (char *)s;
	index = 0;
	while (index < n)
	{
		if(*ptr == (char)c)
			return(ptr)
		ptr++;
		index++;
	}
	return (NULL);
}
