/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:23:36 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/24 19:55:54 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_lib.h"

char	*strdup(const char *s1)
{
	char *str;
	int length = ft_strlen(s1);

	str = (char *)malloc(sizeof(char *) * (length + 1));
	str[length] = "\0";
	return (str);
}
