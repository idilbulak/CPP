NAME			= interface_recap

CPP				= clang++

FLAGS			= -std=c++98 -Wall -W -Werror

SRC				= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

# INC				= Animal.hpp Cat.hpp Dog.hpp Brain.hpp

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