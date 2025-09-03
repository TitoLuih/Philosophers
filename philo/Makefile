NAME = philo
CC = cc
CFLAGS = -Werror -Wextra -Wall

SRC = main.c \
      utils.c \
      check_args.c \
      init.c

OBJS = $(SRC:.c=.o)

RM = rm -f

%.o: %.c philo.h
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
