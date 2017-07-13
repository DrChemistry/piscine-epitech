/*
** my_printf.c for my_printf in /home/the.psychopath/delivery/PSU_2016_my_printf
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Sat Nov 12 15:38:22 2016 Alexandre Di.rosa
** Last update Mon Feb 27 09:56:42 2017 Alexandre Di.rosa
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../../my.h"

int	get_nbr2(char *str, int *x)
{
  int	space;
  int	loop;

  space = 0;
  loop = 1;
  --*x;
  while (str[*x] >= '0' && str[*x] <= '9')
    {
      space = space + (str[*x] - 48) * loop;
      loop = loop * 10;
      --*x;
    }
  ++*x;
  return (space);
}

void	init_tab(int (*ft_print[11])(va_list ap, char *str, int x))
{
  ft_print[0] = &dec;
  ft_print[1] = &dec;
  ft_print[2] = &nsigned_oct;
  ft_print[3] = &nsigned_dec;
  ft_print[4] = &nsigned_hex;
  ft_print[5] = &nsigned_hex_maj;
  ft_print[6] = &chara;
  ft_print[7] = &string;
  ft_print[8] = &pointer;
  ft_print[9] = &binary;
  ft_print[10] = &string_oct;
}

void		my_printf(char *str, ...)
{
  va_list	ap;
  int		x;
  char		*flags;
  int		(*ft_print[11]) (va_list ap, char *str, int x);

  flags = "diouxXcspbS";
  x = 0;
  init_tab(ft_print);
  va_start(ap, str);
  while (str[x] != '\0')
    {
      if (str[x] == '%')
	{
	  ++x;
	  x = check_flags_printf(x, flags, str, ft_print, ap);
	}
      else if (str[x] != '\0')
	{
	  my_putchar(str[x]);
	  ++x;
	}
    }
  va_end(ap);
}

int	check_flags_printf(int x, char *flags, char *str, int (*ft_print[11])(va_list ap, char *str, int x), va_list ap)
{
  int	y;

  y = 0;
  while (flags[y] != str[x] && flags[y] != '\0')
    ++y;
  if (flags[y] == str[x])
    x = ft_print[y](ap, str, x);
  y = 0;
  return (x);
}
