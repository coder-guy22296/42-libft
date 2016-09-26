/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 22:05:56 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/26 10:55:50 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    int index;
	int max_cpy;
    int i;

    index = 0;
    while (dst[index] != '\0')
        index++;
	max_cpy = (size - ft_strlen(dst) - 1);
    i = 0;
    while (i < max_cpy)
    {
        dst[index] = src[i];
        index++;
        i++;
    }
    s1[index] = '\0';
    return (s1);
}
