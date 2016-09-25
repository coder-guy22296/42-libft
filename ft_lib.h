/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 20:14:04 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/25 13:11:14 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(char* str);
int		ft_strdup(const char *s1);
void    ft_bzero(void *s, size_t n);
char	*strcpy(char *dst, const char *src);
char    *strncpy(char *dst, const char *src, size_t len);
char    *strchr(const char *s, int c);

#endif
