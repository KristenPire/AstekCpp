CC	= g++

NAME	= Character

RM	= rm -f

CFLAGS	+= -W -Wall -Wextra -Wfatal-errors 
CXXFLAGS += -std=c++11

SRC	=	main.cpp \
		Character.cpp \
		Warrior.cpp \
		Mage.cpp \
		Priest.cpp \
		Paladin.cpp \
		Hunter.cpp

OBJS	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) $(CFLAGS) $(CFLAGS)-o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:re clean fclean all