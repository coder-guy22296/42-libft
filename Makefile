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
SRC = ft_isdigit.c ft_memset.c ft_strlen.c ft_tolower.c ft_isprint.c\
 ft_strcat.c ft_strncat.c ft_toupper.c ft_atoi.c ft_memccpy.c ft_strchr.c\
 ft_strncmp.c ft_bzero.c ft_memchr.c ft_strcmp.c ft_strncpy.c ft_isalnum.c\
 ft_memcmp.c ft_strcpy.c ft_strnstr.c ft_isalpha.c ft_memcpy.c ft_strdup.c\
 ft_strrchr.c ft_isascii.c ft_memmove.c ft_strlcat.c ft_strstr.c
OFILES = ft_isdigit.o ft_memset.o ft_strlen.o ft_tolower.o ft_isprint.o\
 ft_strcat.o ft_strncat.o ft_toupper.o ft_atoi.o ft_memccpy.o ft_strchr.o\
 ft_strncmp.o ft_bzero.o ft_memchr.o ft_strcmp.o ft_strncpy.o ft_isalnum.o\
 ft_memcmp.o ft_strcpy.o ft_strnstr.o ft_isalpha.o ft_memcpy.o ft_strdup.o\
 ft_strrchr.o ft_isascii.o ft_memmove.o ft_strlcat.o ft_strstr.o
HEADERS = libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc libft.a $(OFILES)
	ranlib libft.a
clean:
	rm -rf $(OFILES)
fclean: clean
	rm $(NAME).a
re: fclean all
