NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc

SRC = 

OBJS = $(SRC:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS) 
	@ar -rcs $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re