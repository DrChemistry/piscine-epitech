/*
** bsq.c for bsq in /home/the.psychopath/delivery/CPE_2016_BSQ/alpha
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Fri Dec  9 23:49:41 2016 Alexandre Di.rosa
** Last update Sun Dec 18 21:51:57 2016 Alexandre Di.rosa
*/

#include "bsq.h"

int		main(int ac, char **av)
{
  int		x;
  int		y;
  t_data_stock	data;

  x = 0;
  y = 0;
  if (errors1(ac, av) == 84)
    return (84);
  av = get_tab(av, &data, x, y);
  data.biggest_size = 0;
  while (x < data.length)
    {
      while (y < data.width)
	{
	  if (av[x][y] == '.')
	    find_square(av, x, y, &data);
	  ++y;
	}
      y = 0;
      ++x;
    }
  av = change_to_x(av, &data);
  aff_tab_str(av, &data);
}

char	**change_to_x(char **av, t_data_stock *data)
{
  int	x;
  int	y;
  int	stock;

  x = 1;
  stock = data->biggest_y;
  while (x <= data->biggest_size)
    {
      while (y < data->biggest_size)
	{
	  av[data->biggest_x][data->biggest_y] = 'x';
	  data->biggest_y = data->biggest_y + 1;
	  ++y;
	}
      y = 0;
      data->biggest_y = stock;
      data->biggest_x = data->biggest_x + 1;
      ++x;
    }
  return (av);
}

void	aff_tab_str(char **av, t_data_stock *data)
{
  int	x;

  x = 1;
  my_putstr(av[0]);
  while (x < data->length)
    {
      my_putchar('\n');
      my_putstr(av[x]);
      ++x;
    }
  my_putchar('\n');
}
