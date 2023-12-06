CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)

clean:
	$(RM) $(wildcard *~) $(NAME)

oclean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(wildcard *~) $(NAME) $(OBJ)

re:
	$(CC) $(CFLAGS) $(SRC) -c
