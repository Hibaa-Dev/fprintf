NAME = libftprintf.a
CC = cc
AR = ar
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_pointer.c ft_printf.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putstr.c ft_unsigned.c
OBJECTS = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) rcs $(NAME) $(OBJECTS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: re all clean fclean

.SECONDARY: $(OBJECTS)
