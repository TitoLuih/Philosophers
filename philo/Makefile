NAME = philo
CC = cc
FLAGS = -Werror -Wextra -Wall

SRC = init.c\
		philo.c\
		utils.c\
		

OBJS = $(SRC:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -lft -o $(NAME)

%.o: %.c philo.h
	$(CC) $(CFLAGS)  -c $< -o $@

clean:
	$(RM) $(OBJS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re