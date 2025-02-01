NAME := RPN

SRC := main.cpp\
 	RPN.cpp\
		
		
OBJS := $(SRC:.cpp=.o)

FLAGS := -Wall -Werror -Wextra -std=c++11 

BLUE = \033[0;34m
GREEN = \033[0;32m
END = \033[0m

COMPILER := c++

all: $(NAME)

$(NAME): $(OBJS)
	@$(COMPILER) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN) $(NAME) created ✅ $(END)"

%.o: %.cpp
	@$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE) $(NAME) removed $(END)"

re: fclean $(NAME)

.PHONE: all clean fclean re MutantStack