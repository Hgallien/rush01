# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgallien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 14:52:04 by hgallien          #+#    #+#              #
#    Updated: 2021/04/11 18:33:36 by hgallien         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/main.c srcs/parse.c srcs/print.c srcs/ft_malloc.c srcs/utils.c 
CC= gcc
CFLAGS= -Wall -Wextra -Werror
NAME= rush
OBJ= $(SRCS:.c=.o)

.PHONY: clean fclean re all 

all: $(NAME) 

$(NAME): $(OBJ)
	$(CC)  $(OBJ) -o $(NAME)

%.o: %.c 
	$(CC) $(CFLAGS) -I includes/ -c -o $@ $< 
clean:
	rm -f $(OBJ) $(SRCS:.c=.o)
fclean: clean
	rm -f $(NAME)
re: fclean all
