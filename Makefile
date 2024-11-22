CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC =	ft_printf.c \
		ft_print_num.c \
		ft_print_utils.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re