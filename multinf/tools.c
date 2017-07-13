#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include "my.h"

char    detfinal(int detention, int rescase, char *result)
{
  if (detention == 1)
    result[rescase - 1] = detention + '0';
  return (*result);
}

char    ascii(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	str[i] = str[i] - '0';
      i = i + 1;
    }
  return (*str);
}

char    trans(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == 0)
	str[i] = str[i] + 10;
      i = i + 1;
    }
  return (*str);
}

int     getdet(char nb)
{
  if (nb < 20)
    return (1);
  if (nb < 30)
    return (2);
  if (nb < 40)
    return (3);
  if (nb < 50)
    return (4);
  if (nb < 60)
    return (5);
  if (nb < 70)
    return (6);
  if (nb < 80)
    return (7);
  if (nb < 90)
    return (8);
  if (nb < 100)
    return (9);
  if (nb >= 100)
    return (10);
  return (0);
}

int	print_res(char *res)
{
  int	i;

  i = my_strlen(res) - 1;
  while (res[i] == '0')
    i = i - 1;
  while (i >= 0)
    {
      my_putchar(res[i]);
      i = i - 1;
    }
  my_putchar('\n');
}

char	*flush_me(char *res)
{
  int	i;

  i = 0;
x
  while (res[i] != '\0')
    {
      res[i] = 0;
      i = i + 1;
    }
  return (*res);
}
