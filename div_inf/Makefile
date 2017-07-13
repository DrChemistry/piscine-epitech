##
## Makefile for Makefile in /home/the.psychopath/delivery/div_inf
## 
## Made by Alexandre Di.rosa
## Login   <the.psychopath@epitech.net>
## 
## Started on  Tue Nov  1 11:12:19 2016 Alexandre Di.rosa
## Last update Tue Nov  1 17:53:59 2016 Alexandre Di.rosa
##

CC      =       gcc

RM      =       rm -f

SRC     =       div_inf.c \
		div_sub.c \
		tools.c

OBJ     =       $(SRC:.c=.o)

NAME    =       divinf

all:    $(NAME)

$(NAME):        $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L. -lmy -I./include/


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

 .PHONY: all clean fclean re
