NAME		= libftprintf.a

H_DIR		= includes/
S_DIR		= srcs/
L_DIR		= srcs/libft/
LIBFT		= $(L_DIR)libft.a
LIBFT_H		= $(L_DIR)includes/libft.h

SRCS		= $(S_DIR)ft_printf.c\

OBJS		= ${SRCS:.c=.o}
OPT_I		= -I$(H_DIR)
CFLAGS		= -Wall -Wextra -Werror
GCC			= gcc $(CFLAGS)
RM			= rm -f
AR			= ar rc
L_MAKE		= make -C $(L_DIR)
			cp $(LIBFT_H) $(H_DIR)

.c.o:		L_MAKE
			$(GCC) $(OPT_I) -c $< -o ${<:.c=.o} 

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
			make -C $(L_DIR) clean
			${RM} $(OBJS)


fclean:		clean
			${RM} $(NAME)
			$(RM) $(H_DIR)libft.h
			$(RM) libft.a
			make -C $(L_DIR) fclean

re:			fclean all

.PHONY:		all clean fclean re