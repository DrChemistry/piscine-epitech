##
## Makefile for makefile in /home/the.psychopath/delivery/CPool_rush2
## 
## Made by Alexandre Di.rosa
## Login   <the.psychopath@epitech.net>
## 
## Started on  Sat Oct 15 16:20:13 2016 Alexandre Di.rosa
## Last update Sat Mar 18 10:34:11 2017 Alexandre Di.rosa
##

MAKE	=	make -C ./lib/my/

CC	=	gcc

RM	=	rm -f

SRC	=	main.c	\
		key_options.c	\

OBJ	=	$(SRC:.c=.o)

LDFLAGS	=	-L./lib/my/ -lmy

CFLAGS	=	-I.

NAME	=	tet

all:	lib $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) -lncurses $(LDFLAGS) $(CFLAGS)
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
