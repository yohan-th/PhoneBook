# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ythollet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/02 21:34:06 by ythollet          #+#    #+#              #
#    Updated: 2019/12/02 21:35:05 by ythollet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

SRCS		= Contact.class.cpp phonebook.cpp

HDRS        = Contact.class.hpp

D_OBJ       = obj/
OBJS        = $(addprefix $(D_OBJ), $(SRCS:.cpp=.o))

CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(D_OBJ)%.o : %.cpp
	@mkdir -p $(D_OBJ)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -rf $(D_OBJ)

fclean: clean
	clean
	@rm -f $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all
