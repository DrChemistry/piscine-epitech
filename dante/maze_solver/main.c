/*
** main.c for dante in /home/the.psychopath/delivery/dante
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Tue Apr 11 15:04:31 2017 Alexandre Di.rosa
** Last update Tue Apr 11 17:17:39 2017 Alexandre Di.rosa
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../my.h"
#include "dante.h"

char	**get_maze(int fd, char **maze)
{
  int	x;
  char	*str;

  x = 0;
  maze = malloc(sizeof(char *) * 40);
  while ((str = get_next_line(fd)) != NULL)
    {
      maze[x] = strdup(str);
      ++x;
    }
  return (maze);
}

int	check_path(char **maze, int *y, int *x)
{
  if (maze[*y][*x + 1] == '*')
    {
      maze[*y][*x] = 'o';
      ++*x;
      return (0);
    }
  else if (maze[*y + 1][*x] == '*')
    {
      maze[*y][*x] = 'o';
      ++*y;
      return (0);
    }
  else if (maze[*y][*x - 1] == '*')
    {
      maze[*y][*x] = 'o';
      --*x;
      return (0);
    }
  else if (maze[*y - 1][*x] == '*')
    {
      maze[*y][*x] = 'o';
      --*y;
      return (0);
    }
  return (1);
}

int	go_back(char **maze, int *y, int *x)
{
  maze[*y][*x] = 'A';
  if (maze[*y][*x + 1] == 'o')
    ++*x;
  else if (maze[*y + 1][*x] == 'o')
    ++*y;
  else if (maze[*y][*x - 1] == 'o')
    --*x;
  else if (maze[*y - 1][*x] == 'o')
    --*y;
  return (1);
}

char	**solve_maze(char **maze)
{
  int	x;
  int	y;
  int	max_x;
  int	max_y;

  x = 0;
  y = 0;
  while (maze[y])
    ++y;
  max_y = y - 1;
  y = 0;
  while (maze[y][x])
    ++x;
  max_x = x - 1;
  x = 0;
  while (x != max_x || y != max_y)
    {
      if (check_path(maze, &y, &x) == 1)
	go_back(maze, &y, &x);
    }
  maze[y][x] = 'o';
  return (maze);
}
int	clean_maze(char **maze)
{
  int	y;
  int	x;

  y = 0;
  x = 0;
  while (maze[y])
    {
      while (maze[y][x])
	{
	  if (maze[y][x] == 'A')
	    maze[y][x] = '*';
	  ++x;
	}
      x = 0;
      ++y;
    }
  return (0);
}

int	check_maze(char **maze)
{
  int	y;
  int	x;

  y = 0;
  x = 0;
  if (maze[0][0] == 'X')
    return (my_puterror("There is no start\n"));
  while (maze[y])
    {
      while (maze[y][x])
	{
	  if (maze[y][x] != 'X' && maze[y][x] != '*')
	    return (my_puterror("Invalid Maze, it can only have 'X's and '*'s\n"));
	  ++x;
	}
      x = 0;
      ++y;
    }
  --y;
  while (maze[y][x])
    ++x;
  if (maze[y][x] == 'X')
    return (my_puterror("There is no finish\n"));
  return (0);
}

int	main(int ac, char **av)
{
  int	fd;
  char	**maze;

  if (ac == 2)
    fd = open(av[1], O_RDONLY);
  else
    {
      printf("You must provide a maze file\n");
      return (84);
    }
  maze = get_maze(fd, maze);
  if (check_maze(maze) == 84)
    return (84);
  solve_maze(maze);
  clean_maze(maze);
  fd = 0;
  printf("\n****** MAZE SOLVED ******\n\n");
  while (maze[fd])
    {
      printf("%s\n", maze[fd]);
      ++fd;
    }
  return (0);
}
