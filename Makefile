NAME = libft.a

SRC = bzero.c \
	  isalnum.c\

OBJS = $(SRC:.c= o)
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "Library Compiled"

run: all
	
clean:
	@rm -f $(OBJS)
	@echo ".o files removed"

fclean: clean
	@rm -f $(NAME)
	@echo "Library removed"

re: fclean all

.PHONY: all fclean clean re
