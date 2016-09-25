/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 13:44:46 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/25 14:14:17 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strstr(const char *big, const char *little)
{
	char	*ptr;
	int		index;
	int		i;

	index = 0;
	i = 0;
	while (big[index] != '\0')
	{
		if (big[index] == little[i] && little[i] != '\0')
		{
			if (i == 0)
				ptr = &big[index];
			else if (little[i + 1] == '\0')
				return (ptr);
			i++;
		}
		else
			i = 0;
		index++;
	}
	return (NULL);
}