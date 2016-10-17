/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 19:56:17 by cyildiri          #+#    #+#             */
/*   Updated: 2016/10/03 21:06:13 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_cpy_helper(char **str_out,char const *s1, char const *s2)
{
	int		index;
	int		i;

	index = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		*str_out[index] = s1[i];
		i++;
		index++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		*str_out[index] = s2[i];
		i++;
		index++;
	}
	*str_out[len] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_out;
	int		len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str_out = ft_strnew(len)))
		return (NULL);
	ft_cpy_helper(&str_out, s1, s2);
	return (str_out);
}
