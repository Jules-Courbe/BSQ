CC = cc
CFLAGS = -Wall -Werror -Wextra -g -I includes
SRC = srcs/main.c \
		srcs/extract_data.c\
		srcs/malloc_initilise.c\
		srcs/display.c\
		srcs/algorythm.c\
		srcs/parser.c\
		srcs/parser_buffer.c\

OBJ = $(SRC:.c=.o)
NAME = bsq

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

play: $(NAME)
	./bsq map/mapdix.txt