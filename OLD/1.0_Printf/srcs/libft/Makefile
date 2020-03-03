# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stelie <stelie@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 10:55:56 by stelie            #+#    #+#              #
#    Updated: 2020/02/10 15:54:56 by stelie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

H_DIR	= .
I_DIR	= ../../includes/
M_DIR	= ../../

SRCS	= ft_bzero.c\
			ft_isalnum.c\
			ft_calloc.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_atoi.c\
			ft_memchr.c\
			ft_memcpy.c\
			ft_memccpy.c\
			ft_memset.c\
			ft_memcmp.c\
			ft_memmove.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strlcat.c\
			ft_tolower.c\
			ft_strnstr.c\
			ft_strncmp.c\
			ft_toupper.c\
			ft_strrchr.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_power.c\
			ft_strmapi.c\
			ft_putchar_fd.c\
			ft_putchar_fd_count.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			convert_base.c\
			convert_base_2.c\

OBJS	= ${SRCS:.c=.o}
OPTION	= -I${H_DIR}

CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
AR		= ar rc

.c.o:
			gcc ${CFLAGS} ${OPTION} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}
			cp libft.h ${I_DIR}
			cp $(NAME) $(M_DIR)
			
all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
			${RM} ${I_DIR}libft.h
			${RM} ${M_DIR}$(NAME)
			

re:			fclean all

.PHONY:		all clean fclean re
