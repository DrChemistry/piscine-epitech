##
## Makefile for makefile in /home/the.psychopath/delivery/CPool_rush2
## 
## Made by Alexandre Di.rosa
## Login   <the.psychopath@epitech.net>
## 
## Started on  Sat Oct 15 16:20:13 2016 Alexandre Di.rosa
## Last update Thu Mar  2 00:57:57 2017 Alexandre Di.rosa
##

CC	=	gcc

RM	=	@rm -f

SRC	=	my_isneg.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_puterror.c	\
		my_strcapitalize.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c	\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_strlen.c	\
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strstr.c	\
		my_strupcase.c	\
		my_swap.c	\
		my_get_nbr.c	\
		my_str_str.c	\
		get_next_line.c	\
		my_printf.c	\
		my_printf2.c	\
		my_printf3.c	\
		disp_stdarg.c	\
		sum_stdarg.c	\
		my_printf_oct.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	@echo "LIB COMPILED"


clean: 
	$(RM) $(OBJ)

fclean: clean
	@$(RM) $(OBJ) $(NAME)
	@echo "LIB FCLEAN"

re: fclean all

 .PHONY: all clean fclean re
