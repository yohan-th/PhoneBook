# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ythollet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/04 22:27:09 by ythollet          #+#    #+#              #
#    Updated: 2019/12/04 22:27:10 by ythollet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = replace

FLAGS = -std=c++98 -Wall -Werror -Wextra

CC = clang++

SRC = replace.cpp

OBJ = $(SRC:.cpp=.o)

.PHONY: re all clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
%.o: %.cpp
	@$(CC) $(FLAGS) -c $<
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
