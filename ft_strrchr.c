/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 13:12:35 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/25 13:33:57 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *strrchr(const char *s, int c)
{
    char    *ptr;
    int     index;

    ptr = NULL;
    index = 0;
    while (s[index] != '\0')
        index++;
	while (index >= 0)
	{
		if (s[index] == (char)c)
			ptr = &s[index];
		index--;
	}
    return (ptr);
}
