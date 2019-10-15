# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/08 13:21:17 by dlartigu          #+#    #+#              #
#    Updated: 2019/06/04 11:27:08 by dlartigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

############## COLORS ##################
_WHITE=$ \x1b[37m
_BLUE=$ \x1b[36m
_GREEN=$ \033[1;32m
_GREY=$ \x1b[33m
_RED=$ \x1b[31m

NAME = fillit
LIB = libft/libft.a
FLAG = -Wall -Wextra -Werror
SRC_PATH = src/
SRC_NAME = ft_back_solve.c \
			ft_backtrack.c  \
			ft_board_size.c \
			ft_check_link.c \
			ft_check_valid.c \
			ft_disp.c  \
			ft_error.c \
			ft_finish_map.c \
			ft_free_board.c \
			ft_free_tab.c  \
			ft_free_tetri.c \
			ft_hight.c \
			ft_parser.c \
			ft_print_solved.c  \
			ft_read.c  \
			ft_sqrt.c \
			ft_struct_hight.c \
			ft_struct_main.c  \
			ft_struct_map.c \
			ft_struct_pos.c  \
			ft_struct_width.c \
			ft_tetri_parser.c \
			ft_width.c \
			main.c \

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(SRCLIB:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIB) $(SRC) $(OBJ)
				@gcc -o $(NAME) $(FLAG) $(SRC) -L./libft -lft
				@echo "$(_GREEN)[OK]$(_BLUE) I got a FILLIT"

$(LIB):
			@make -C libft

clean:
			@make -C libft clean

fclean: clean
			@rm -rf $(NAME)
			@make -C libft fclean
			@echo "$(_GREEN)[OK]$(_WHITE) You deleted me, retard!"

re: fclean all
