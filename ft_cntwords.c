/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntwords.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 21:11:30 by cyildiri          #+#    #+#             */
/*   Updated: 2016/10/04 21:15:58 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cntwords(char const *str, char delim)
{
    char    lastchar;
    int     index;
    int     words;

    words = 0;
    word_start = 0;
    lastchar = c;
    index = 0;
    while (str[index] != '/0')
    {
		if (str[index] == c)
			if (lastchar != c)
				words++;
        last_char = str[index];
        index++;
    }
	return (words);
}
