/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 14:26:41 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/25 14:42:59 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strcmp(const char *s1, const char *s2)
{
	int index;

	index = 0;
	while (s1[index] == s2[index] && s1[index] != '\0' && s2[index] != '\0')
		index++;
	if (s1[index] != s2[index])
		return ((int)s1[index] - (int)s2[index]);
	else
		return (0);
}
