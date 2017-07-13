/*
** sum_stdarg.c for sum_stdarg in /home/the.psychopath/delivery/PSU_2016_my_printf
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Mon Nov  7 13:41:28 2016 Alexandre Di.rosa
** Last update Mon Feb 27 09:58:37 2017 Alexandre Di.rosa
*/

#include<stdarg.h>
#include "../../my.h"

int		sum_stdarg(int i, int nb, ...)
{
  va_list	ap;
  int		x;

  x = 0;
  if (nb <= 0)
    return (84);
  va_start(ap, nb);
  if (i == 1)
    {
      while (nb > 0)
	{
	  x = x + my_strlen(va_arg(ap, char*));
	  nb = nb - 1;
	}
    }
  else if (i == 0)
    {
      while (nb > 0)
	{
	  x = x + va_arg(ap, int);
	  nb = nb - 1;
	}
    }
  va_end(ap);
  return (x);
}
