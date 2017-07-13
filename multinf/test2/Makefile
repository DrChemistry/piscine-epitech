##
## Makefile for makefile in /home/the.psychopath/delivery/CPool_rush2
## 
## Made by Alexandre Di.rosa
## Login   <the.psychopath@epitech.net>
## 
## Started on  Sat Oct 15 16:20:13 2016 Alexandre Di.rosa
## Last update Mon Oct 31 20:28:26 2016 Alexandre Di.rosa
##

CC	=	gcc

RM	=	rm -f

SRC	=	multinf2.c \
		tools.c

OBJ	=	$(SRC:.c=.o)

NAME	=	multinf

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L. -lmy -I./include/


clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

 .PHONY: all clean fclean re
