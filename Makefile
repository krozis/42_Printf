NAME		= libftprintf.a
INCLUDE		= includes
SRC_DIR		= src/
OBJ_DIR		= obj/
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -f
AR			= ar rc

#Sources
SRC_FILES 	= ft_printf\
				ft_pf_use\
				ft_pf_int\
				ft_pf_strings\
				ft_pf_uint\
				ft_pf_hexa\
				ft_pf_ptr\
				ft_pf_tools

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

all:		$(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME):	$(OBJ)
			@$(AR) $(NAME) $(OBJ)
			@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"

bonus:		$(NAME)

clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all