/*
** main.c for main in /home/the.psychopath/delivery/dante/perfect_generator
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Sat Apr 15 18:51:54 2017 Alexandre Di.rosa
** Last update Wed Apr 19 14:25:44 2017 Alexandre Di.rosa
*/

#include "../my.h"
#include <stdlib.h>
#include <stdio.h>

void	gen(int length, int witdh)
{
  char	**maze;
  int	x;

  x = 0;
  maze = malloc(sizeof(char *) * witdh);
  while (x != witdh)
    {
      maze = malloc(sizeof(char) * length);
      ++x;
    }
  x = 0;
  while (x < witdh)
    {
      maze[x] = gen_x_line(maze[x], lenth);
      ++x;
      maze[x] = gen_snd_line(maze[x], length);
    }
}

char	*gen_x_line(char **maze, int b)
{
  int	x;

  x = 0;
  while (x < length)
    {
      maze[x] = 'x';
      ++x;
    }
  return (maze);
}

char	*gen_snd_line(char **maze, int b)
{
  int	x;

  x = 0;
  while (x < length)
    {
      maze[x] = '*';
      ++x;
      if (x < length)
	{
	  maze[x] = 'x';
	  ++x;
	}
    }
}

int	main(int ac, char **av)
{
  int	x;
  int	b;

  x = 0;
  b = 0;
  if (ac == 3)
    {
      x = my_get_nbr(av[1]);
      b = my_get_nbr(av[2]);
      printf("%d, %d", x, b);
      gen(x, b);
    }
  return (0);
}
