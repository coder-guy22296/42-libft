/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 16:41:11 by cyildiri          #+#    #+#             */
/*   Updated: 2016/10/03 17:08:48 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	index;
	int				i;
	char			*out_str;
	
	if(!(out_str = ft_strnew(len)))
		return (NULL);
		
	index = start;
	i = 0;
	while (index < start + length)
	{
		out_str[i] = s[index];
		i++;
		index++;
	}
}
