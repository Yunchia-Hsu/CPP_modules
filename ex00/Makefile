# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhsu <student.hive.fi>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/28 10:03:46 by yhsu              #+#    #+#              #
#    Updated: 2024/09/02 15:52:35 by yhsu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

SRC := megaphone.cpp

OBJS = $(SRC:.cpp=.o)

FLAGS := -Wall -Werror -Wextra -std=c++11

COMPILER := c++

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILER) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(COMPILER) -o $(FLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re