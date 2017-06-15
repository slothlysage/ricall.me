# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/05 18:34:09 by sjones            #+#    #+#              #
#    Updated: 2017/06/14 22:48:29 by sjones           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all re clean fclean

NAME = ft_db

SRC =	add_ent.c		\
			begin_list.c	\
			check_query.c	\
			cp_av2db.c		\
			db_2file.c		\
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
			char_len.c	\
			help.c

OBJ = $(SRC:.c=.o)
INC = ./include/ft_db.h 
VPATH = src/:
LIBFT_PATH = libft
LIB = -Llibft -lft
FLAGS = -Wall -Wextra 

all: libft $(NAME)
libft:
	make -C libft

# Executables
$(NAME): $(OBJ)
	gcc -o $@ $(FLAGS) $^ -include $(INC) $(LIB)

# Object files
$(OBJ): $(SRC)
	gcc -c $^ $(FLAGS) -include $(INC) 

# Cleaning rules
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
