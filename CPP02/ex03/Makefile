# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/26 17:05:48 by mbany             #+#    #+#              #
#    Updated: 2025/05/17 14:12:55 by mbany            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
SRC = main.cpp \
	  Fixed.cpp \
	  Point.cpp \
	  bsp.cpp

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)
	@echo "© copyright by mbany 2025"

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re