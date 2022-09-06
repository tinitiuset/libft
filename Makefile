NAME = libft.a

SRC =	atoi.c \
	bzero.c \
	calloc.c \
	isalnum.c \
	isalpha.c \
	isascii.c \
	isdigit.c \
	isprint.c \
	itoa.c \
	memchr.c \
	memcmp.c \
	memcpy.c \
	memmove.c \
	memset.c \
	split.c \
	strchr.c \
	strjoin.c \
	strdup.c \
	strlcat.c \
	strlcpy.c \
	strlen.c \
	strncmp.c \
	strnstr.c \
	strrchr.c \
	substr.c \
	strtrim.c \
	tolower.c \
	toupper.c \

OBJS = $(SRC:%.c=%.o)
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "Library Compiled"

$(OBJS) : $(SRC)
	@gcc $(FLAGS) -c $(SRC)

run: all
	
clean:
	@rm -f $(OBJS)
	@echo ".o files removed"

fclean: clean
	@rm -f $(NAME)
	@echo "Library removed"

re: fclean all

.PHONY: all fclean clean re
