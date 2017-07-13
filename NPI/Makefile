##
## Makefile for makefile in /home/the.psychopath/delivery/CPool_rush2
## 
## Made by Alexandre Di.rosa
## Login   <the.psychopath@epitech.net>
## 
## Started on  Sat Oct 15 16:20:13 2016 Alexandre Di.rosa
## Last update Sat Nov  5 10:57:24 2016 Alexandre Di.rosa
##

CC	=	gcc

RM	=	rm -f

SRC	=	npi.c	\
		npi_algo2.c

OBJ	=	$(SRC:.c=.o)

NAME	=	npi_algo

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -g -o $(NAME) $(OBJ) -L. -lmy -I.


clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

 .PHONY: all clean fclean re
