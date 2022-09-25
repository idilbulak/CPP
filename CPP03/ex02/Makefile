NAME			= fragtrap

CPP				= c++

FLAGS			= -std=c++98 -Wall -Wextra -Werror

CPP				=	c++
CPP_FLAGS		= 	-Wall -Wextra -Werror -std=c++98 
SRC				= ClapTrap.cpp main.cpp FragTrap.cpp


INC				= ClapTrap.hpp FragTrap.hpp

OBJ_DIR			= obj
OBJ				= $(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

all : $(NAME)

$(OBJ_DIR)/%.o : %.cpp
	@mkdir -p $(dir $@)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $^ -o $@

clean : 
	rm -rf $(OBJ_DIR)
fclean : clean
	rm -rf $(NAME)
re : fclean all
.PHONY : clean, fclean, all, re