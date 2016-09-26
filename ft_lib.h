/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 20:14:04 by cyildiri          #+#    #+#             */
/*   Updated: 2016/09/25 21:55:21 by cyildiri         ###   ########.fr       */
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
char	*ft_strcpy(char *dst, const char *src);
char    *ft_strncpy(char *dst, const char *src, size_t len);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strstr(const char *big, const char *little);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
void    *ft_memchr(const void *s, int c, size_t n);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memset(void *b, int c, size_t len);
char    *ft_strcat(char *s1, const char *s2);

#endif
