NAME = push_swap

CC = cc

CCFLAG = -Wall -Wextra -Werror -g3

SRC = cm_op.c      main.c       operation.c  operation2.c operation3.c split.c      utils.c      utils2.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CCFLAG) $(OBJ) -o $(NAME)

%.o: %.c push_swap.h
	@printf "\033[1;92mCompiled 👌🏽 %s\033[0m\n" $@
	@$(CC) $(CCFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	@printf "\033[1;31mRemoved binary: $(NAME) 💣\033[0m\n"
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re