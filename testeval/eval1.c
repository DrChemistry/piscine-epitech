/*
** eval1.c for evalexpr in /home/the.psychopath/delivery/testeval
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Thu Oct 27 15:58:20 2016 Alexandre Di.rosa
** Last update Thu Oct 27 15:58:22 2016 Alexandre Di.rosa
*/

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include "my.h"

char	mult(char *str, char *result, int i, int x)
{
  int	stock;
  int	count;

  stock = str[i - 1] - 48;
  i = i + 1;
  while (stock != 0)
    {
      count = 0;
      while (str[i] >= '0' && str[i] <= '9')
	{
	  result[x] = str[i];
	  i = i + 1;
	  x = x + 1;
	  count = count + 1;
	}
      if (stock != 1)
	result[x] = '+';
      x = x + 1;
      stock = stock - 1;
      i = i - count;
    }
  return (*result);
}

char	div1(char *str, char *result, int i, int x)
{
  int	stock;
  int	count;
  
  i = i + 1;
  while (stock != 0)
    {
      while (str[i] >= '0' || str[i] < '9')
	{
	  result[x] = str[i];
	  i = i + 1;
	  x = x + 1;
	  count = count + 1;
	}
      result[x] = '+';
      x = x + 1;
      stock = stock - 1;
      i = i - count;
    }
}

char	mod(char *str, char *result, int i, int x)
{
  int	stock;
  int	count;
  
  i = i + 1;
  while (stock != 0)
    {
      while (str[i] >= '0' || str[i] < '9')
	{
	  result[x] = str[i];
	  i = i + 1;
	  x = x + 1;
	  count = count + 1;
	}
      result[x] = '+';
      x = x + 1;
      stock = stock - 1;
      i = i - count;
    }
}

char	add(char *str, char *result, int i, int x)
{
  int	stock;
  int	count;
  
  i = i + 1;
  while (stock != 0)
    {
      while (str[i] >= '0' || str[i] < '9')
	{
	  result[x] = str[i];
	  i = i + 1;
	  x = x + 1;
	  count = count + 1;
	}
      result[x] = '+';
      x = x + 1;
      stock = stock - 1;
      i = i - count;
    }
}

char	sub(char *str, char *result, int i, int x)
{
  int	stock;
  int	count;
  
  i = i + 1;
  while (stock != 0)
    {
      while (str[i] >= '0' || str[i] < '9')
	{
	  result[x] = str[i];
	  i = i + 1;
	  x = x + 1;
	  count = count + 1;
	}
      result[x] = '+';
      x = x + 1;
      stock = stock - 1;
      i = i - count;
    }
}

int	evalexpr(char *str)
{
  int	i;
  char	*result;
  int	x;

  x = 0;
  i = 0;
  result = malloc(sizeof(char) * (my_strlen(str) * 100));
  while (str[i] != '\0')
    {
      if (str[i] == '*')
	{
	  *result = mult(str, result, i, x);
	}
      /*else if (str[i] == '/')
	{
	  *result = div1(str, result, i, x);
	}
      else if (str[i] == '%')
	{
	  *result = mod(str, result, i, x);
	}
      else if (str[i] == '+')
	{
	  *result = add(str, result, i, x);
	}
      else if (str[i] == '-')
	{
	  *result = sub(str, result, i, x);
	  }*/
      i = i + 1;
    }
  my_putstr(result);
  return (*result);
}
