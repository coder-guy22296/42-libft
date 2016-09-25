/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 13:00:16 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/25 13:10:52 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		index;

	ptr = NULL;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			ptr = &s[index];
		index++;
	}
	if (s[index] == (char)c)
		ptr = &s[index];
	return (ptr);
}
