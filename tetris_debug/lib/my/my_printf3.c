/*
** my_printf3.c for my_printf3 in /home/the.psychopath/delivery/PSU_2016_my_printf
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Sun Nov 20 15:54:09 2016 Alexandre Di.rosa
** Last update Mon Feb 27 09:57:13 2017 Alexandre Di.rosa
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../../my.h"

int     chara(va_list ap, char *str, int x)
{
  int	y;

  y = va_arg(ap, int);
  my_putchar(y);
  return (++x);
}

int     string(va_list ap, char *str, int x)
{
  my_putstr(va_arg (ap, char*));
  return (++x);
}

int     pointer(va_list ap, char *str, int x)
{
  my_putstr("0x7ff");
  pointer2(va_arg(ap, unsigned long), 16);
  if (str[x] != '\0')
    ++x;
  return (x);
}

int     binary(va_list ap, char *str, int x)
{
  nsigned_hex2(va_arg(ap, unsigned long), 2);
  if (str[x] != '\0')
    ++x;
  return (x);
}

int     string_oct(va_list ap, char *str, int x)
{
  char  *str2;
  int   b;

  b = 0;
  str2 = va_arg(ap, char *);
  while (str2[b] != '\0')
    {
      if (str2[b] < 32 || str2[b] >= 127)
	{
	  my_putstr("\\");
	  if (str2[b] < 8)
	    {
	      my_putchar('0');
	      my_putchar('0');
	    }
	  else if (str2[b] > 7 && str2[b] < 32)
	    my_putchar('0');
	  nsigned_oct2((str2[b]), 8);
	  ++b;
	}
      my_putchar(str2[b]);
      ++b;
    }
  return (++x);
}
