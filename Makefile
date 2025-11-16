COMPILE =	cc

CFLAGS =	-Werror -Wall -Wextra 

SOURCE =	ft_printf.c \
			ft_putnbr_base.c \
			ft_putnbr_fd.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_strlen.c \
			ft_putptr.c \
			count_car.c \



NAME =	libftprintf.a

INCLUDES =	ft_printf.h

OBJS =	$(SOURCE:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(COMPILE) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJSBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
