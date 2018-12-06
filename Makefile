CC	= g++

NAME	= The_Federation_The_Colon_Wars

RM	= rm -f

CFLAGS	+= -W -Wall -Wextra -Wfatal-errors 
CXXFLAGS += -std=c++11

SRC	=	main.cpp \
		Federation.cpp \
		WarpSystem.cpp

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