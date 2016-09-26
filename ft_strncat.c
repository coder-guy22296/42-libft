/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 21:57:00 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/25 22:03:05 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncat(char *s1, const char *s2, size_t n)
{
    int index;
    int i;

    index = 0;
    while (s1[index] != '\0')
        index++;
    i = 0;
    while (i < n)
    {
        s1[index] = s2[i];
        index++;
        i++;
    }
	s1[index] = '\0';
    return (s1);
}
