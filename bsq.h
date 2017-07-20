/*
** bsq.h for bsq in /home/the.psychopath/delivery/CPE_2016_BSQ
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Wed Dec  7 01:27:41 2016 Alexandre Di.rosa
** Last update Sun Dec 18 21:51:35 2016 Alexandre Di.rosa
*/

#ifndef MY_BSQ_H_
# define MY_BSQ_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include "my.h"

typedef struct	s_square_size
{
  int	origin_x;
  int	origin_y;
  int   limit_x;
  int   limit_y;
  int	size;
}		t_square_size;

typedef struct	s_data_stock
{
  int	width;
  int	length;
  int	biggest_x;
  int	biggest_y;
  int	biggest_size;

}		t_data_stock;

int	ft_get_nbr(char *nbr);
int	get_the_size(int fd, t_data_stock *data, char *file);
char	**get_tab(char **av, t_data_stock *data, int x, int y);
void	find_square(char **, int, int, t_data_stock *data);
int	check_right_side(char **, t_square_size *, t_data_stock *);
int	check_bottom_side(char **, t_square_size *, t_data_stock *);
void	aff_tab_str(char **, t_data_stock *);
char	**change_to_x(char **, t_data_stock *);
int	errors1(int, char **);
int	errors2(void);
char	**read_file(char **tab, t_data_stock *data, int fd, char buffer);

#endif /* !MY_SOKOBAN */
