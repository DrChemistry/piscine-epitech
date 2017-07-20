/*
** my_putstr.c for my_putstr in /home/the.psychopath/delivery/CPool_Day04
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Thu Oct  6 18:49:39 2016 Alexandre Di.rosa
** Last update Sun Dec 18 21:59:55 2016 Alexandre Di.rosa
*/

#include <unistd.h>

void	my_putchar(char c);
int	my_strlen(char *);

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  i = my_strlen(str);
  write(1, str, i);
  return (0);
}
