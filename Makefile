##
## Makefile for makefile in /home/the.psychopath/delivery/CPool_rush2
## 
## Made by Alexandre Di.rosa
## Login   <the.psychopath@epitech.net>
## 
## Started on  Sat Oct 15 16:20:13 2016 Alexandre Di.rosa
## Last update Fri Feb 17 20:08:58 2017 Alexandre Di.rosa
##

MAKE	=	make -C ./lib/my/

CC	=	gcc

RM	=	rm -f

SRC	=	bsq.c		\
		find_square.c	\
		get.c		\
		errors.c

OBJ	=	$(SRC:.c=.o)

LI	=	-L./lib/my/ -lmy -I.

NAME	=	bsq

all:	$(MAKE) $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LI)

clean:
	$(MAKE) clean
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean
	$(RM) $(OBJ) $(NAME)

re: fclean all

 .PHONY: all clean fclean re
