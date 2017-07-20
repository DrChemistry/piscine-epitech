/*
** errors.c for errors in /home/the.psychopath/delivery/CPE_2016_BSQ
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Sat Dec 10 15:57:26 2016 Alexandre Di.rosa
** Last update Sat Dec 10 15:58:55 2016 Alexandre Di.rosa
*/

#include "bsq.h"

int             errors1(int ac, char **av)
{
  int           fd;
  struct stat   read;

  if (ac != 2)
    {
      my_putstr("Too much arguments, the system handle only one file\n");
      return (84);
    }
  stat(av[1], &read);
  if (!(S_ISREG(read.st_mode)))
    {
      my_putstr("You have to provide an ordinary file\n");
      return (84);
    }
  return (0);
}

int	errors2(void)
{
  my_putstr("The file must contains only '.' and 'o'\n");
  exit (84);
}
