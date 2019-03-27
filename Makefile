##
## EPITECH PROJECT, 2018
## make
## File description:
## make
##

CC	=	gcc

NAME	=	push_swap

SRC	=	src/push_swap.c			\
		src/check_list.c		\
		src/swap_list.c			\
		src/my_getnbr.c			\
		src/my_put_in_list.c		\
		src/my_show_list.c		\
		src/add_in_list.c		\
		src/pa_pb_sa.c			\
		src/my_putchar.c		\
		src/my_put_nbr.c		\
		src/my_putstr.c			\
		src/my_strlen.c

OBJ	=	$(SRC:.c=.o)

RM	=	rm -f

CFLAGS	=	-Werror -Wextra -Wall -Iinclude -lm -g3

all:	$(NAME)

$(NAME):	 $(OBJ)
		 $(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) vgcore.*

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:         all clean fclean re
