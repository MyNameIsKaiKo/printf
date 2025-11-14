COMPILE =	cc

CFLAGS =	-Werror -Wall -Wextra 

SOURCE =	ft_printf.c \
			ft_putnbr_base.c \
			ft_putpercent.c \
			ft_putunbr.c \

NAME =	libftprintf.a

INCLUDES =	printf.h

OBJS =	$(SOURCE:.c=.o)

OBJSBONUS = $(SOURCEBONUS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(COMPILE) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

bonus: $(OBJS) $(OBJSBONUS)
	ar rcs $(NAME) $(OBJS) $(OBJSBONUS)

clean:
	rm -f $(OBJS) $(OBJSBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
