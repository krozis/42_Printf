NAME		= libftprintf.a
INCLUDE		= includes
SRC_DIR		= src/
OBJ_DIR		= src/
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I $(INCLUDE) 
RM			= rm -f
AR			= ar rc

SRC_FILES	= ft_printf\
				ft_pf_use\
				ft_pf_strings\
				ft_pf_int\
				ft_pf_uint\
				ft_pf_hexa\
				ft_pf_ptr\
				ft_pf_tools_1\
				ft_pf_tools_2\
				ft_pf_tools_3
	
SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

$(OBJ_DIR)%.o:		$(SRC_DIR)%.c
					$(CC) $(CFLAGS) -c $< -o $@


$(NAME):			$(OBJ)
					@$(AR) $(NAME) $(OBJ)

all:				$(NAME)

bonus:				$(NAME)

clean:
					@$(RM) $(OBJ)

fclean:				clean
					@$(RM) $(NAME)

re:					fclean all
