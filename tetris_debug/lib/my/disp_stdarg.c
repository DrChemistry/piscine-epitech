/*
** dis_stdarg.c for disp_stdarg in /home/the.psychopath/delivery/PSU_2016_my_printf
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Mon Nov  7 15:45:51 2016 Alexandre Di.rosa
** Last update Mon Feb 27 09:57:23 2017 Alexandre Di.rosa
*/

#include "../../my.h"
#include "stdarg.h"

int		disp_stdarg(char *s, ...)
{
  va_list	ap;
  int		nb;

  nb = 0;
  va_start (ap, s);
  while (s[nb] != '\0')
    {
      if (s[nb] == 'c')
	my_putchar(va_arg(ap, int));
      else if (s[nb] == 's')
	my_putstr(va_arg(ap, char*));
      else if (s[nb] == 'i')
	my_put_nbr(va_arg(ap, int));
      else
	return (84);
      nb = nb + 1;
    }
  va_end(ap);
  return (0);
}
