# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stelie <stelie@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/04 11:15:01 by stelie            #+#    #+#              #
#    Updated: 2020/02/10 15:34:48 by stelie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
LIBFT_A = libft.a

H_DIR	= ./includes/
L_DIR	= srcs/libft/
CB_DIR	= srcs/convert_base/

S_DIR	= srcs/
s_FILES = test.c

OBJS	= ${S_DIR:.c=.o}
OBJBONUS = ${B_DIR:.c=.o}
OPTION	= -I${H_DIR}
L_MK	= make -C $(L_DIR)
CB_MK	= make -C $(CB_DIR)

CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
AR		= ar rc

.c.o:		$(L_MK) $(CB_DIR)
			gcc ${CFLAGS} ${OPTION} ${OBJS}

$(NAME):	${OBJS}

			${AR} ${NAME} ${OBJS}

bonus:		${NAME} ${OBJBONUS}
			${AR} ${NAME} ${OBJBONUS}

all:		${NAME}

clean:
			make -C $(L_DIR) clean
			#PROBLEM 	${RM} ${OBJS}${OBJBONUS}


fclean:		clean
			${RM} $(NAME)
			make -C $(L_DIR) fclean

re:			fclean all

.PHONY:		all clean fclean re bonus