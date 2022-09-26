NAME			= polymorphism

CPP				= c++

FLAGS			= -std=c++98 -Wall -Wextra -Werror

SRC				= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

INC				= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

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