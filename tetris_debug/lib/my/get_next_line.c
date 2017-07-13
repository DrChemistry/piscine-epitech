/*
** get_next_line.c for get_next_line in /home/the.psychopath/delivery/CPE_2016/CPE_2016_getnextline
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Tue Jan  3 09:20:52 2017 Alexandre Di.rosa
** Last update Fri Mar  3 13:28:12 2017 Alexandre Di.rosa
*/

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "../../my.h"
#include "../../get_next_line.h"

char	*get_next_line(const int fd)
{
  char	*str;
  char	buff;
  int	x;

  x = 0;
  if ((str = malloc(sizeof(char) * 1000)) == NULL)
    return (NULL);
  while (read(fd, &buff, READ_SIZE) != 0)
    {
      if (buff != '\n')
	str[x] = buff;
      else
	{
	  str[x] = '\0';
	  return (str);
	}
      ++x;
    }
  if (x == 0)
    return (NULL);
  str[x] = '\0';
  return (str);
}

char		*large_reading(const int fd, char *str, int x)
{
  char		*large;
  int		b;
  static char	rest[READ_SIZE];

  if ((large = malloc(sizeof(char) * READ_SIZE + 1)) == NULL)
    return (NULL);
  b = put_old(rest, str, b);
  while (read(fd, large, READ_SIZE))
    {
      while (large[x] != '\0')
	{
	  if (large[x] != '\n')
	    str[b] = large[x];
	  else
	    {
	      if (large[x + 1] != '\0')
		save_char(large, x + 1, rest);
	      return (str);
	    }
	  ++x;
	  ++b;
	}
      x = 0;
    }
}

int	put_old(char *rest, char *str, int b)
{
  int	x;

  x = 0;
  b = 0;
  if (rest[x] != '\0')
    {
      while (rest[x])
	{
	  str[b] = rest[x];
	  rest[x] = '\0';
	  ++b;
	  ++x;
	}
    }
  return (b);
}

void	save_char(char *large, int x, char *rest)
{
  int	b;

  b = 0;
  while (large[x] != '\0')
    {
      rest[b] = large[x];
      ++x;
      ++b;
    }
}
