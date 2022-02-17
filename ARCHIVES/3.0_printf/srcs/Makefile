NAME		= printf.a

LIBFT_H		= $(L_DIR)includes/libft.h

SRCS		= $(wildcard *.c)

OBJS		= ${SRCS:.c=.o}

#CFLAGS		= -Wall -Wextra -Werror
GCC			= gcc #$(CFLAGS)
RM			= rm -f
AR			= ar rc

.c.o:		
			$(GCC) -c $< -o ${<:.c=.o} 

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} $(OBJS)


fclean:		clean
			${RM} $(NAME)
			${RM} ../${NAME}
			${RM} ../*.h

re:			fclean all

.PHONY:		all clean fclean re