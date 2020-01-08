# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsahloum <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/06 10:35:10 by nsahloum          #+#    #+#              #
#    Updated: 2020/01/07 15:49:07 by nsahloum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra -c

SRC = *.c

OBJ = ${SRC:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
		${CC} ${CFLAGS} ${SRC}
		ar rc libft.a *.o

${OBJ} : ${SRC}
		${CC} ${CFLAGS}  ${SRC}

clean :  
		rm ${OBJ}

fclean :
		rm ${OBJ} ${NAME}

re : fclean all
.PHONY : fclean all
