/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 14:44:10 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/25 14:47:01 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int index;

    index = 0;
    while (index < n && s1[index] == s2[index])
        index++;
    if (s1[index] != s2[index])
		return ((int)s1[index] - (int)s2[index]);
    else
		return (0);
}