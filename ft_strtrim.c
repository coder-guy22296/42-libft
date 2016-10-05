/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 21:43:21 by cyildiri          #+#    #+#             */
/*   Updated: 2016/10/04 16:56:08 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s)
{
	int		index;
	int		i;
	int		len;
	char	*out_str;
	int		high;
	int		low;

	index = 0;
	low = -1;
	high = -1;
	while (s[index] != '\0')
	{
		if (!ft_isspace(s[index] && low == -1))
			low = index;
		index++;
	}
	while (index >= 0 && high != index)
	{
		if (!ft_isspace(s[index] && high  == -1))
		{
			high = index;
			len = (high + 1) - low;
			break;
		}
		index--;
	}
	if (!(str_out = strnew(len)))
		return (NULL);
	index = high;
	i = len - 1;
	while (index >= low)
	{
		out_str[i] = s[index];
		i--;
		index--;
	}
}
