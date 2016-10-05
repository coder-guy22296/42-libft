/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 16:56:23 by cyildiri          #+#    #+#             */
/*   Updated: 2016/10/05 13:08:43 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**str_arr;
	char	lastchar;
	int		index;
	int		words;
	int		word;
	int		word_start;
	int		cpy;
	int		i;
	
	words = ft_cntwords(s, c);
	word = 0;
	if (!(str_arr = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	word_start = 0;
    lastchar = c;
    index = 0;
	while (s[index] != '\0' && word < words)
    {
        if (s[index] == c || s[index + 1] == '\0')
        {
            if (lastchar != c)
            {
				if (!(str_arr[word] = ft_strnew(index - word_start)))
				{
					ft_stradel(&str_arr);
					return (NULL);
				}
				word++;
            }
        }
        else if (lastchar == c)
        {
            word_start = index;
        }
        lastchar = s[index];
        index++;
    }
	if (!(str_arr[words] = ft_strnew(0)))
	{
		ft_stradel(&str_arr);
		return (NULL);
	}
    word_start = 0;
    lastchar = c;
	word = 0;
	cpy = 0;
	index = 0;
	i = 0;
	while (s[index] != '\0' && word < words)
	{
        if (s[index] == c)
        {
            if (lastchar != c)
            {//last char is the end of the word
				cpy = 0;
				i = 0;
                word++;
            }
        }
        else if (lastchar == c)//first char of word is index
			cpy = 1;
		if (cpy)
		{	
			str_arr[word][i] = (char)s[index];
			i++;	
		}
		lastchar = s[index];
        index++;
    }
	str_arr[words][0] = '\0';
	return (str_arr);
}
