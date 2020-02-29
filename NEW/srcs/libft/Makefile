NAME	= libft.a

S_DIR	= srcs/
H_DIR	= includes/

SRCS	= $(S_DIR)ft_putchar_fd.c\
			$(S_DIR)ft_putstr_fd.c

OBJS	= $(SRCS:.c=.o)
OPT_I	= -I$(H_DIR)
CFLAGS	= -Wall -Wextra -Werror
GCC		= gcc $(CFLAGS)
RM		= rm -f
AR		= ar rc

.c.o:
			$(GCC) $(OPT_I) -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re