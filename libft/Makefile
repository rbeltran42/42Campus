# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/08 20:01:28 by rbeltran          #+#    #+#              #
#    Updated: 2021/04/15 13:23:05 by rbeltran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SRCS = 	ft_memset.c		\
		ft_atoi.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memccpy.c	\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strrchr.c	\
		ft_strchr.c		\
		ft_strncmp.c	\
		ft_strlcat.c	\
		ft_strlcpy.c 	\
		ft_strnstr.c	\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c 	\
		ft_strtrim.c	\
		ft_putchar_fd.c \
		ft_putstr_fd.c 	\
		ft_putendl_fd.c \
		ft_putnbr_fd.c  \
		ft_split.c 		\
		ft_lstnew.c 	\
		ft_putstr.c		\
		ft_putchar.c	\
		ft_putnbr.c		\
		ft_itoa.c		\

OBJS = $(SRCS:.c=.o)

HEADER = libft.h

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) -I $(HEADER) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean