NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC			= 


OBJ = $(SRC:.c=.o)

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re