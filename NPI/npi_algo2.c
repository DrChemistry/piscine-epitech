/*
** npi_algo2.c for npi_algo2 in /home/the.psychopath/delivery/CPool_bistro-matic/di-rosa/NPI
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Wed Nov  2 18:54:02 2016 Alexandre Di.rosa
** Last update Sun Nov  6 13:33:17 2016 Alexandre Di.rosa
*/

#include <unistd.h>
#include <stdio.h>
#include "npialgo.h"
#include "my.h"
#include <stdlib.h>

/*
**Okay les mecs, le code n'est pas censé marcher... Vraiment pas, mais il marche... Les miracles du code... Donc lisez le, utilisez le. Et on en reparles avant l'oral.
*/

int	get_op_prio(char op)
{
  if (op == '*')
    return (2);
  if (op == '/')
    return (2);
  if (op == '%')
    return (2);
  if (op == '+')
    return (1);
  if (op == '-')
    return (1);
  if (op == '(')
    return (2);
  else
    return (0);
}

char *write_op(char *res, int *x, char *op, int y)
{
  y--;
  while (y >= 0)
    {
      if (op[y] != '(')
	{
	  res[*x] = op[y];
	  *x = *x + 1;
	}
      op[y] = '\0';
      y = y - 1;
    }
  res[*x] = ' ';
  return (res);
}

char	*swap_op_expr(char *expr, char *op, char *res)
{
  int	x;
  int	y;
  int	z;
  int	i;

  x = 0;
  z = 0;
  y = 0;
  i = 0;
  while (expr[z] != '\0')
    {
      if ((expr[z] >= '0' && expr[z] <= '9') || expr[z] == 'n')
	{
	  res[x] = expr[z];
	  x = x + 1;
	}
      else if (expr[z] == '+' || expr[z] == '-' || expr[z] == '*'
	       || expr[z] == '/' || expr[z] == '%'
	       || expr[z] == ')')
	{
	  if (res[x - 1] != ' ')
	    {
	      res[x] = ' ';
	      x = x + 1;
	    }
	  if (op[0] == '\0')
	    op[y] = expr[z];
	  if (expr[z] == '(')
	    {
	      op[y] = expr[z];
	      i = y + 1;
	    }
	  else if (expr[z] == ')' || (get_op_prio(op[i]) >= get_op_prio(expr[z])))
	    {
	      if (expr[z] == ')')
		i = 0;
	      res = write_op(res, &x, op, y);
	      y = 0;
	      if (expr[z] != ')')
		op[y] = expr[z];
	    }
	  else
	    op[y] = expr[z];
	  y = y + 1;
	}
      z = z + 1;
    }
  my_putchar('\n');
  my_putstr(res);
  my_putchar('\n');
  my_putstr(op);
  my_putchar('\n');
  y = y - 1;
  if (y >= 0)
    while (y >= 0)
      {
	if (op[y] != '(')
	  {
	    res[x] = op[y];
	    x = x + 1;
	  }
	y = y - 1;
      }
  return (res);
}

char    *get_neg(char *str)
{
  int   x;

  x = 0;
  while (str[x] != '\0')
    {
      if ((str[x] == '+' || str[x] == '-' ||
	   str[x] == '%' || str[x] == '/' ||
	   str[x] == '*' || str[x] == '(') && str[x + 1] == '-')
	{
	  str[x + 1] = 'n';
	  x = x + 1;
	}
      x = x + 1;
    }
  return (str);
}
