/*
** my_printf2.c for my_printf2 in /home/the.psychopath/delivery/PSU_2016_my_printf
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Sun Nov 20 15:53:06 2016 Alexandre Di.rosa
** Last update Thu Mar  2 00:56:55 2017 Alexandre Di.rosa
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../../my.h"
int     dec(va_list ap, char *str, int x)
{
  my_put_nbr(va_arg (ap, int));
  return (++x);
}

int     nsigned_oct(va_list ap, char *str, int x)
{
  nsigned_oct2(va_arg (ap, unsigned int), 8);
  return (++x);
}

int		nsigned_dec(va_list ap, char *str, int x)
{
  unsigned int  nb;

  nb = va_arg(ap, unsigned int);
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  my_putchar(nb % 10 + 48);
  return (++x);
}

int     nsigned_hex(va_list ap, char *str, int x)
{
  nsigned_hex2(va_arg(ap, unsigned int), 16);
  return (++x);
}

int     nsigned_hex_maj(va_list ap, char *str, int x)
{
  nsigned_hex3(va_arg(ap, unsigned int), 16);
  return (++x);
}
