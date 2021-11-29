NAME 		=	libftprintf.a
CC			=	gcc
COPY		=	cp
REPLACE		=	cp -f
H_DIR		=	includes
LIB			=	libft.a
LIB_DIR		=	src/42_Libft
LIB_H_DIR	=	src/42_Libft/includes
LIB_H		=	libft.h
S_DIR		=	src
SRCS		=	ft_printf.c

B_SRCS		=	bonus.c

OBJS		=	$(SRCS:%.c=%.o)
OBJBONUS	=	$(B_SRCS:%.c=%.o)
INCLUDES	=	-I$(H_DIR)
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -rf
AR			=	ar rc

%.o:	$(S_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			$(COPY) $(LIB_H_DIR)/$(LIB_H) $(H_DIR)
			$(COPY)	$(LIB_DIR)/$(LIB) .

bonus:	$(NAME) $(OBJBONUS)
		$(AR) $(NAME) $(OBJBONUS)
		$(REPLACE) $(LIB_H_DIR)/$(LIB_H) $(H_DIR)
		$(REPLACE)	$(LIB_DIR)/$(LIB) .

all:	$(NAME)
		

clean:
		$(RM) $(OBJS) $(OBJBONUS)

fclean:	clean
		$(RM) $(NAME)
		$(RM) $(H_DIR)/$(LIB_H)
		$(RM) $(LIB)

re:	fclean all