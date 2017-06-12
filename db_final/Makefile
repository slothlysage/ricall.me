# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/05 18:34:09 by sjones            #+#    #+#              #
#    Updated: 2017/05/05 18:43:27 by sjones           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all re clean fclean

NAME = ft_db

SRC_PATH = ./src
OBJ_PATH = ./obj

SRC_NAME =	add_ent.c		\
			begin_list.c	\
			check_query.c	\
			cp_av2db.c		\
			db_2file.c		\
			delete_all.c	\
			delete_data.c	\
			delete_ent.c	\
			edit_ent.c		\
			export_all.c	\
			export_ent.c	\
			ft_2dstrlen.c	\
			ft_print2d.c	\
			ft_strjoindb.c	\
			init_db.c		\
			init_ent.c		\
			main.c			\
			print_all.c		\
			print_ent.c		\
			print_color.c	\
			help.c

OBJ_NAME = $(SRC_NAME:.c=.o)
INC_NAME = 	ft_db.h

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
INC = $(addprefix $(SRC_PATH)/, $(INC_NAME)) 
OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))
LIB = ./src/libftprintf.a

FLAGS = -g#-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) $(LIB) -I $(INC) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
