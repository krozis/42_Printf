NAME =		printf.a

RM = 		rm

${NAME}:
			make -C srcs/
			cp srcs/printf.a ./
			cp srcs/*.h ./

all:		${NAME}

clean:
			make clean -C srcs/

fclean:		
			make fclean -C srcs/

re:			fclean all
			${RM} a.out
			
.PHONY:		all clean fclean re