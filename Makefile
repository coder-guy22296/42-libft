# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyildiri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/02 13:05:49 by cyildiri          #+#    #+#              #
#    Updated: 2016/10/02 13:05:49 by cyildiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
SRC = ft_memset.c ft_striteri.c ft_pop_sign.c ft_strjoin.c ft_atoi.c\
 ft_putchar.c ft_strlcat.c ft_bzero.c ft_putchar_fd.c ft_strlen.c\
  ft_cntwords.c ft_putendl.c ft_strmap.c ft_count_digits.c ft_putendl_fd.c\
   ft_strmapi.c ft_isalnum.c ft_putnbr.c ft_strncat.c ft_isalpha.c\
    ft_putnbr_fd.c ft_strncmp.c ft_isascii.c ft_putstr.c ft_strncpy.c\
     ft_isdigit.c ft_putstr_fd.c ft_strnequ.c ft_isprint.c ft_stradel.c\
      ft_strnew.c ft_isspace.c ft_strcat.c ft_strnstr.c ft_itoa.c\
       ft_strchr.c ft_strrchr.c ft_memalloc.c ft_strclr.c ft_strsplit.c\
        ft_memccpy.c ft_strcmp.c ft_strstr.c ft_memchr.c ft_strcpy.c\
         ft_strsub.c ft_memcmp.c ft_strdel.c ft_strtrim.c ft_memcpy.c\
          ft_strdup.c ft_tolower.c ft_memdel.c ft_strequ.c ft_toupper.c\
           ft_memmove.c ft_striter.c
OFILES = ft_memset.o ft_striteri.o ft_pop_sign.o ft_strjoin.o ft_atoi.o\
 ft_putchar.o ft_strlcat.o ft_bzero.o ft_putchar_fd.o ft_strlen.o\
  ft_cntwords.o ft_putendl.o ft_strmap.o ft_count_digits.o ft_putendl_fd.o\
   ft_strmapi.o ft_isalnum.o ft_putnbr.o ft_strncat.o ft_isalpha.o\
    ft_putnbr_fd.o ft_strncmp.o ft_isascii.o ft_putstr.o ft_strncpy.o\
     ft_isdigit.o ft_putstr_fd.o ft_strnequ.o ft_isprint.o ft_stradel.o\
      ft_strnew.o ft_isspace.o ft_strcat.o ft_strnstr.o ft_itoa.o ft_strchr.o\
       ft_strrchr.o ft_memalloc.o ft_strclr.o ft_strsplit.o ft_memccpy.o\
        ft_strcmp.o ft_strstr.o ft_memchr.o ft_strcpy.o ft_strsub.o\
         ft_memcmp.o ft_strdel.o ft_strtrim.o ft_memcpy.o ft_strdup.o\
          ft_tolower.o ft_memdel.o ft_strequ.o ft_toupper.o ft_memmove.o\
           ft_striter.o
HEADERS = libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc libft.a $(OFILES)
	ranlib libft.a
clean:
	rm -rf $(OFILES)
fclean: clean
	rm -f $(NAME).a
re: fclean all
