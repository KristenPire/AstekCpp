CC	= g++

NAME	= Fallout

RM	= rm -f

CFLAGS	+= -W -Wall -Wextra -Wfatal-errors 
CXXFLAGS = -std=c++17

SRC	=	Federation.cpp \
		WarpSystem.cpp \
		main.cpp
		

OBJS	= $(SRC:.cpp=.o) #

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) $(CFLAGS) -o $(NAME) $(CXXFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:re clean fclean all
