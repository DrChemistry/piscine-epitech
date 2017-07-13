/*
** part1.c for part1 in /home/the.psychopath/delivery/bootstrapeval
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Thu Oct 27 16:39:31 2016 Alexandre Di.rosa
** Last update Fri Oct 28 17:27:57 2016 Alexandre Di.rosa
*/
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include "my.h"

int	calcul(int nb1, int nb2, int a)
{
  int	res;

  res = 0;
  my_put_nbr(a);
  if (a == 0)
    res = res + nb1 + nb2;
  my_putstr("RESULTAT = ");
  my_put_nbr(res);
  my_putchar('\n');
}

int	summands(char operators)
{
  if (operators == '+')
    return (operators);
  if (operators == '*')
    return (1);
}

int	eval_expr(char *str)
{
  int	i;
  char	op;
  int	nb1;
  int	nb2;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	{
	  op = summands(str[i]);
	  nb1 = genius1(str, i);
	  nb2 = genius2(str, i);
	  my_put_nbr(nb1);
	  my_putchar(op);
	  my_put_nbr(nb2);
	  my_putchar('\n');
	}
      i = i + 1;
    }
}

int	main(int ac, char **av)
{
  eval_expr(av[1]);
  return (0);
}
