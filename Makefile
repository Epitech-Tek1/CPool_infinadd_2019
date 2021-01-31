##
## EPITECH PROJECT, 2019
## infin_add
## File description:
## make an infinite calculator
##

SRC	=		infin_add.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	infin_add

$(NAME):	$(OBJ)
	make -C ./lib/my
	@gcc -o $(NAME) $(OBJ) -L./lib/my -lmy

all:	$(NAME)

clean:
	@rm *.o
	make -C ./lib/my clean

fclean: clean
	@rm -f	$(NAME)
	make -C ./lib/my fclean

re:fclean all

.PHONY: clean fclean