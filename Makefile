##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makefile
##

SRC	=	./main.c	\
		./src/call_ls.c	\
		./src/dup_tab.c	\
		./src/my_cd.c	\
		./src/my_pwd.c	\
		./src/disp_lenv.c	\
		./src/my_putstr.c	\
		./src/my_strlen.c	\
		./src/delete_chain.c	\
		./src/free_list.c	\
		./src/my_strcpy.c	\
		./src/my_strdup.c	\
		./src/my_put_nbr.c	\
		./src/my_setenv.c	\
		./src/my_strcomp.c	\
		./src/my_put_lnbr.c	\
		./src/create_lenv.c	\
		./src/count_total.c	\
		./src/verify_typed.c	\
		./src/add_end_list.c	\
		./src/str_to_word_array.c	\

OBJ	=	$(SRC:.c=.o)

REM	=	*.gcno	\
		*.gcda

CC	=	@gcc

CFLAGS	=	-Wall -Wextra -g3

CPPFLAGS	=	-I./include

NAME	=	mysh

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all clean

.PHONY: fclean all clean re
