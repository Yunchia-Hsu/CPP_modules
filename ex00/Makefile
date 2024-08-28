# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhsu <student.hive.fi>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/28 10:03:46 by yhsu              #+#    #+#              #
#    Updated: 2024/08/28 14:53:50 by yhsu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

SRC := megaphone.cpp

OBJS = $(SRC:.cpp=.o)

FLAGS := -Wall -Werror -Wextra -std=c++11

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean:
		rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re