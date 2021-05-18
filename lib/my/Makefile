##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makef
##

SRC	=	hex_decimal_capitalize.c	\
		b_flags.c	\
		o_flags.c	\
		u_flags.c	\
		bigx_flags.c	\
		x_flags.c	\
		s_flags.c	\
		i_flags.c	\
		d_flags.c	\
		c_flags.c	\
		my_printf.c	\
		put_unsigned_nbr.c	\
		put_binary_nbr.c	\
		my_putstr.c			\
		my_putchar.c		\
		my_put_octal.c		\
		my_put_nbr.c		\
		hex_decimal.c		\
		my_put_pointer.c	\
		modulo_flags.c		\
		my_atoi.c

SRC_UT	=	tests/tests_my_printf.c		\
			hex_decimal_capitalize.c	\
			b_flags.c	\
			o_flags.c	\
			u_flags.c	\
			bigx_flags.c	\
			x_flags.c	\
			s_flags.c	\
			i_flags.c	\
			d_flags.c	\
			c_flags.c	\
			my_printf.c	\
			put_unsigned_nbr.c	\
			put_binary_nbr.c	\
			my_putstr.c			\
			my_putchar.c		\
			my_put_octal.c		\
			my_put_nbr.c		\
			hex_decimal.c		\
			my_put_pointer.c	\
			modulo_flags.c

OBJ	=	$(SRC:.c=.o)

OBJ_UT	=	$(SRC:.c=.o)

CPPFLAGS	=	-I./includes

LDFLAGS	=	-L./ -lmy

NAME	=	libmy.a

NAME_UT	=	units_tests

all:	$(NAME)

$(NAME):	 $(OBJ)
			ar rc $(NAME) $(OBJ)

tests_run: $(OBJ) $(OBJ_UT)
			make re -C .
			gcc -o $(NAME_UT) $(SRC_UT) $(CPPFLAGS) $(LDFLAGS) -lcriterion --coverage
			./$(NAME_UT)
clean:
			rm -f $(NAME_UT)
			rm -f *.gcno
			rm -f *.gcda
			rm -f $(OBJ)

fclean:	clean
			rm -f $(NAME)

re:	clean fclean all