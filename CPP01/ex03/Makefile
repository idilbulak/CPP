NAME			= unnecessary_violance

CPP				= c++

FLAGS			= -std=c++98 -Wall -Wextra -Werror

SRC				= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

INC				= HumanA.hpp HumanB.hpp Weapon.hpp 

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