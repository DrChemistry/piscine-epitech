/*
** my_printf_oct.c for my_printf_oct in /home/the.psychopath/delivery/PSU_2016_my_printf
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Wed Nov 16 02:43:28 2016 Alexandre Di.rosa
** Last update Thu Mar  2 00:48:49 2017 Alexandre Di.rosa
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../my.h"

void		nsigned_oct2(unsigned int i, int base)
{
  unsigned int	x;
  unsigned int	count;
  unsigned int	y;
  unsigned int	loop;

  x = 1;
  count = 1;
  loop = 1;
  y = 0;
  while (i / base > 0 || count == 1)
    {
      if (i / base == 0)
	count = 0;
      x = i % base;
      y = y + (x * loop);
      loop = loop * 10;
      i = i / base;
    }
  my_put_nbr(y);
}

void		nsigned_hex2(unsigned int i, int base)
{
  unsigned int 	x;

  x = i % base;
  i = i / base;
  if (i != 0)
    nsigned_hex2(i, base);
  if (x >= 10)
    {
      my_putchar(x + 87);
    }
  else
    my_put_nbr(x);
  return;
}

void		nsigned_hex3(unsigned int i, int base)
{
  unsigned int 	x;

  x = i % base;
  i = i / base;
  if (i != 0)
    nsigned_hex2(i, base);
  if (x >= 10)
    {
      my_putchar(x + 55);
    }
  else
    my_put_nbr(x);
  return;
}

void		pointer2(unsigned long i, int base)
{
  unsigned long	x;

  x = i % base;
  i = i / base;
  if (i != 0)
    nsigned_hex2(i, base);
  if (x >= 10)
    {
      my_putchar(x + 55);
    }
  else
    my_put_nbr(x);
  return;
}
