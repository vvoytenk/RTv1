# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/07 16:35:00 by vvoytenk          #+#    #+#              #
#    Updated: 2018/08/07 16:35:02 by vvoytenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = #-Wall -Wextra -Werror
NAME = RTv1
PREFIX = $(PWD)/build

SRC =  main.c usage.c init.c scene.c scene1.c color.c vectors.c render.c other.c scene2.c intersection.c

.PHONY: re clean fclean all libft

OBJ = $(SRC:.c=.o)
LIBFTFLAGS = -L./libft -lft
LIBFT = libft

IFLAGS = -I./libft -I$(PREFIX)/include -I.

LFLAGS = \
		-L./libft -lft \
		-L$(PREFIX)/lib -lSDL2 -lSDL2_image \
		-framework OpenGL -framework AppKit

all: $(NAME)

%.o:
	@$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $(subst .o,.c, $@)

$(NAME): $(LIBFT) $(OBJ)
	@$(CC) $(CFLAGS) $(IFLAGS) $(LFLAGS) -o $(NAME) $(OBJ)

$(LIBFT):
	make -C libft/

install_libs:
	@bash ./install.sh

clean:
	@rm -f $(OBJ)
	@make -C ./libft clean

fclean: clean 
	@rm -f $(NAME)
	@make -C ./libft fclean

re: fclean all
