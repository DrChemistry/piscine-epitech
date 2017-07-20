/*
** get.c for get in /home/the.psychopath/delivery/CPE_2016_BSQ
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Sat Dec 10 15:48:33 2016 Alexandre Di.rosa
** Last update Tue Dec 20 13:06:19 2016 Alexandre Di.rosa
*/

#include "bsq.h"

char	**get_tab(char **av, t_data_stock *data, int x, int y)
{
  int	fd;
  char	buffer;
  char	**tab;

  get_the_size(fd, data, av[1]);
  tab = malloc(sizeof(char *) * (data->length + 1));
  tab[0] = malloc(sizeof(char) * data->width);
  fd = open(av[1], O_RDONLY);
  tab = read_file(tab, data, fd, buffer);
  close(fd);
  return (tab);
}

char	**read_file(char **tab, t_data_stock *data, int fd, char buffer)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (buffer != '\n')
    read(fd, &buffer, 1);
  while (read(fd, &buffer, 1))
    {
      if (buffer == '\n')
	{
	  tab[x][y] = '\0';
	  ++x;
	  tab[x] = malloc(sizeof(char) * data->width);
	  y = 0;
	}
      else if (buffer == '.' || buffer == 'o')
	{
	  tab[x][y] = buffer;
	  ++y;
	}
      else
	errors2();
    }
  return (tab);
}

int     get_the_size(int fd, t_data_stock *data, char *file)
{
  char  buffer;
  char  nbr[100];
  int   x;

  x = 0;
  fd = open(file, O_RDONLY);
  while (buffer != '\n')
    {
      read(fd, &buffer, 1);
      nbr[x] = buffer;
      ++x;
    }
  nbr[x] = '\0';
  data->length = ft_get_nbr(nbr);
  read(fd, &buffer, 1);
  x = 0;
  while (buffer != '\n')
    {
      read(fd, &buffer, 1);
      ++x;
    }
  data->width = x + 1;
  close(fd);
  if (data->width < 0 || data->length < 0)
    exit (84);
}

int     ft_get_nbr(char *nbr)
{
  int   x;
  int   loop;
  int   res;

  x = my_strlen(nbr) - 2;
  loop = 1;
  res = 0;
  while (x >= 0)
    {
      res = res + ((nbr[x] - 48) * loop);
      loop = loop * 10;
      --x;
    }
  return (res);
}
