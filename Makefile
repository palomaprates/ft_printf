NAME = ft_printf

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c                   \
			ft_hexa.c                 \
			ft_putchar.c                  \
			ft_putnbr.c                 \
			ft_putnbr_u.c                 \
			ft_putptr.c                 \
			ft_putstr.c                 \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

$(NAME): $(OBJS)
	cc $(OBJS)

clean:
	 rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
