# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/09 11:40:31 by nsahloum          #+#    #+#              #
#    Updated: 2020/01/09 16:44:22 by nsahloum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	ft_isalnum.c 	\
			ft_isascii.c 	\
			ft_isprint.c	\
			ft_strchr.c		\
			ft_strlen.c		\
			ft_strncmp.c	\
			ft_strrchr.c	\
			ft_tolower.c	\
			ft_toupper.c	\
			ft_isdigit.c	\
			ft_isalpha.c	\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memmove.c	\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strlcpy.c	\
			ft_strlcat.c	\

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re