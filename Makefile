##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makef
##

SRC	=	src/main.c		\
		src/l_a.c		\
		src/l_b.c		\
		src/list_algo.c	\
		src/insert_or_init.c	\
		src/basic_func.c	\
		src/memory_allocation.c		\
		src/push_swap.c

OBJ	=	$(SRC:.c=.o)

LDFLAGS	=	-L./lib/my -lmy

CPPFLAGS	=	-g3 -I./includes

CLFAGS	=	-W -Wall -Wextra

NAME	=	push_swap

all:	$(NAME)

$(NAME):	 $(OBJ)
			make -C lib/my re
			gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS) $(CFLAGS)

clean:
			cd lib/my/ && make fclean
			rm -f *.gcno
			rm -f *.gcda
			rm -f $(OBJ)

fclean:	clean
			rm -f $(NAME)
			rm -f $(NAME_UT)

re:	clean fclean all