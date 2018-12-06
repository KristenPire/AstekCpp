CC	= g++

NAME	= Federation

RM	= rm -f

CFLAGS	+= -W -Wall -Wextra

SRC	=	*.cpp


OBJS	= $(SRC:.cpp=.o) #transforme tous les cpp en .o

all: $(NAME)

$(NAME): $(OBJS) 
	 $(CC) $(OBJS) $(CFLAGS) -o $(NAME) #linkage

clean:			#erase les objets
	$(RM) $(OBJS) 		

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:re clean fclean all