CC	= g++

NAME	= Let_Them_Burn

RM	= rm -f

CFLAGS	+= -W -Wall -Wextra -Wfatal-errors 
CXXFLAGS += -std=c++11

SRC	=	main.cpp \
		AWeapon.cpp \
		PlasmaRifle.cpp \
		PowerFist.cpp \
		AEnemy.cpp \
		RadScorpion.cpp \
		SuperMutant.cpp \
		Character.cpp

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