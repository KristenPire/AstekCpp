CC	= g++

NAME  = ave

RM	= rm -f

CXXFLAGS	+= -std=c++11 -W -Wall -Wextra -Wfatal-errors -g -O0

SRC	=	main.cpp \
		Cesar.cpp \
		OneTime.cpp 


OBJS	= $(SRC:.cpp=.o)	#Règle qui dit de trasformer les .cpp en .o

all: $(NAME)				#Quand on fait make all, executer la règle NAME

$(NAME): $(OBJS)			#Dit que la règle OBJS doit être respectée
	 $(CC) $(OBJS) $(CXXFLAGS) -o $(NAME)		#La commande lancée, du coup

clean:
	$(RM) $(OBJS)			#Enlève les OBJS

fclean: clean  				#Il y a un : -> c'est une règle
	$(RM) $(NAME)

re: fclean all	

.PHONY:re clean fclean all #Necessaire
