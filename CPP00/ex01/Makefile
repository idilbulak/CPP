NAME			=	phonebook

SRC				= 	main.cpp phonebook.cpp phonebook.class.cpp contact.cpp contact.class.cpp

INC				=	-I ./inc

OBJS			=	$(SRC:%.cpp=%.o)

CPP				=	g++
CPP_FLAGS		= 	-Wall -Wextra -Werror -std=c++98

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CPP_FLAGS) $(INC) $(OBJS) -o $(NAME)
				@echo "\033[0;36mYou can add new contacts and search for existing contacts in Phonebook."

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re bonus