NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_print_c.c ft_print_s.c 
OBJS = $(SRCS:.c=.o)
RM = rm -f
LIB = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
