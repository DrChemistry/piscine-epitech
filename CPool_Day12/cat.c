/*
** cat.c for cat in /home/the.psychopath/delivery/CPool_Day12
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Wed Oct 19 10:38:39 2016 Alexandre Di.rosa
** Last update Fri Oct 28 10:32:18 2016 Alexandre Di.rosa
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "my.h"
void	empty(int size, char *buffer)
{
  while (1)
    {
      size = read(0, buffer, 20);
      write(1, buffer, size);
    }
}
int	main(int ac, char **av)
{
  int	fd;
  char	buffer[20];
  int	size;
  int	i;

  i = 1;
  if (ac == 1)
    empty(size, buffer);
  while (i < ac)
    {
      size = 2;
      fd = open(av[i], O_RDONLY);
      if (fd == -1)
	{
	  my_putstr("ERROR WHILE OPENING");
	  return (1);
	}
      while ((size = read(fd, buffer, 20)) > 0)
	write(1, buffer, size);
      my_putchar('\n');
      i = i + 1;
    }
}
