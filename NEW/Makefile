NAME =		printf.a

RM = 		rm

${NAME}:
			make -C srcs/
			cp srcs/printf.a ./
			cp srcs/*.h ./

all:		${NAME}

clean:
			${RM} srcs/*.o

fclean:		clean
			${RM} $(NAME)
			${RM} *.h

re:			fclean all

.PHONY:		all clean fclean re