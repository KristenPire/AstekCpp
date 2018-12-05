CC	= g++

NAME	= Fallout

RM	= rm -f

CFLAGS	+= -W -Wall -Wextra -Wfatal-errors

SRC	=	AEnemy.cpp \
		PlasmaRifle.cpp \
		PowerFist.cpp


OBJS	= $(SRC:.cpp=.o) #

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:re clean fclean all
