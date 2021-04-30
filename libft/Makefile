# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbeltran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/08 20:01:28 by rbeltran          #+#    #+#              #
#    Updated: 2021/04/27 19:13:07 by rbeltran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra
CC = gcc
RM = rm -f
AR = ar rcs

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
		ft_itoa.c		\
		ft_strmapi.c	

SRCSB =	ft_lstnew.c		\
		ft_lstadd_front.c \
		ft_lstsize.c  \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstclear.c \
		ft_lstmap.c 

OBJS = $(SRCS:.c=.o)

OBJSB = $(SRCSB:.c=.o)

HEADER = libft.h

all: $(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)
	
bonus: 		$(OBJSB)
			$(AR) $(NAME) $(OBJSB)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re