##
## Makefile for makefile in /home/the.psychopath/delivery/CPool_rush2
## 
## Made by Alexandre Di.rosa
## Login   <the.psychopath@epitech.net>
## 
## Started on  Sat Oct 15 16:20:13 2016 Alexandre Di.rosa
## Last update Tue Apr 11 17:18:02 2017 Alexandre Di.rosa
##

MAKE	=	make -C ./../lib/my/

CC	=	gcc

RM	=	rm -f

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

LDFLAGS	=	-L./../lib/my/ -lmy

CFLAGS	=	-I.

NAME	=	solver

all:	lib $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)
	@echo "Binary well created"

lib:
	$(MAKE)

clean:
	$(MAKE) clean
	$(RM) $(OBJ)
	@echo "Repository clean"

fclean: clean
	$(MAKE) fclean
	$(RM) $(OBJ) $(NAME)

re: fclean all

 .PHONY: all clean fclean re lib
