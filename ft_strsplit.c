/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 16:56:23 by cyildiri          #+#    #+#             */
/*   Updated: 2016/10/04 21:18:17 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**sts_arr;
	char	lastchar;
	int		last;
	int		index;
	int		words;
	int		word;
	int		len;
	int		word_start;
	int		word_end;
	
	words = ft_cntwords(s, c);
	word_start = 0;
	lastchar = c;
	index = 0;
	if (!(str_arr = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	word_start = 0;
    lastchar = c;
    index = 0;
	while (s[index] != '/0')
    {
        if (s[index] == c)
        {
            if (lastchar != c)
            {
                word_end = index - 1;
				
				words
            }
        }
        else if (lastchar == c)
        {
            word_start = index;
        }
        last_char = s[index];
        index++;
    }	
}
