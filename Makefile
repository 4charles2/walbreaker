#Makefile pour walbreaker
EXEC= TEST
SRC= main.c#$(wildcard *.c)
CC= gcc
OBJ= $(SRC:.c=.O)
CFLAGS= -g -W -Wall -Werror -Wextra -ansi -pedantic
FLAGS= -lSDL

all $(EXEC)

$(EXEC): $(OBJ) 
	$(CC) $^ -o $@ $(FLAGS)
$(OBJ): $(SRC)
	$(CC) -c -g $^ $(CFLAGS) $(FLAGS)
clean: %.o
	rm -rf $^
fclean:
	rm -rf $(EXEC)
