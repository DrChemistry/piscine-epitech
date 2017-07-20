/*
** find_square.c for find_square in /home/the.psychopath/delivery/CPE_2016_BSQ
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Sat Dec 10 15:46:46 2016 Alexandre Di.rosa
** Last update Sat Dec 10 15:47:21 2016 Alexandre Di.rosa
*/

#include "bsq.h"

void            find_square(char **av, int x, int y, t_data_stock *data)
{
  t_square_size square;

  square.origin_x = x;
  square.origin_y = y;
  square.size = 1;
  square.limit_x = x + 1;
  square.limit_y = y + 1;
  while (check_right_side(av, &square, data) == 0 &&
	 check_bottom_side(av, &square, data) == 0 &&
	 square.limit_x < data->length && square.limit_y < data->width)
    {
      square.size = square.size + 1;
      square.limit_x = square.limit_x + 1;
      square.limit_y = square.limit_y + 1;
    }
  if (square.size > data->biggest_size)
    {
      data->biggest_size = square.size;
      data->biggest_x = square.origin_x;
      data->biggest_y = square.origin_y;
    }
}

int     check_right_side(char **av, t_square_size *square, t_data_stock *data)
{
  int   x;

  x = square->origin_x;
  while (x <= square->limit_x)
    {
      if (av[x][square->limit_y] != '.')
	return (1);
      ++x;
    }
  return (0);
}

int     check_bottom_side(char **av, t_square_size *square, t_data_stock *data)
{
  int   y;

  y = square->origin_y;
  while (y <= square->limit_y)
    {
      if (av[square->limit_x][y] != '.')
	return (1);
      ++y;
    }
  return (0);
}
