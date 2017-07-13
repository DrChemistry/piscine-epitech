/*
** div_inf.c for div_inf in /home/the.psychopath/delivery/div_inf
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Tue Nov  1 17:34:22 2016 Alexandre Di.rosa
** Last update Wed Nov  2 11:36:14 2016 Alexandre Di.rosa
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include "my.h"

char	*div_inf2(char *nb1, char *nb2, char *res)
{
  int	leni;
  int	lena;
  int	rescase;
  int	x;

  my_putchar('A');
  lena = my_strlen(nb2) - 1;
  rescase = 0;
  *nb2 = ascii(nb2);
  while (compnbr(nb1, nb2) == 1)
    {
      leni = my_strlen(nb1) - 1;
      *nb1 = ascii(nb1);
      nb1 = div_sub(nb1, nb2, leni, lena);
      x = x + 1;
      my_putchar('B');
    }
  my_put_nbr(x);
  return (res);
}

char	*div_inf(char *nb1, char *nb2, char *res)
{
  int	leni;
  int   lena;

  leni = my_strlen(nb1) - 1;
  lena = my_strlen(nb2) - 1;
  if (compnbr(nb1, nb2) == 1)
    res = div_inf2(nb1, nb2, res);
  else if (compnbr(nb1, nb2) == 1)
    res[0] = '1';
  else if (compnbr(nb1, nb2) == 2)
    res[0] = '0';
  return (res);
}

int	main(int ac, char **av)
{
  char *res;

  res = malloc(sizeof(char) * (my_strlen(av[1]) + 1));
  res = div_inf(av[1], av[2], res);
  my_putchar('\n');
  my_putchar('A');
  return (0);
}
