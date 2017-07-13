/*
** div_sub.c for div_sub in /home/the.psychopath/delivery/div_inf
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Tue Nov  1 17:34:29 2016 Alexandre Di.rosa
** Last update Wed Nov  2 11:40:51 2016 Alexandre Di.rosa
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include "my.h"

char	*div_sub(char *nb1, char *nb2, int leni, int lena)
{
  int	x;
  char	*temp;
  int	detention;
  int	stock;

  detention = 0;
  temp = malloc(sizeof(char) * leni + 1);
  x = 0;
  while (leni >= 0)
    {
      my_put_nbr(leni);
      if (lena < 0)
	stock = nb1[leni] - detention;
      else
	stock = nb1[leni] - nb2[lena] - detention;
      if (stock <= 0)
	{
	  temp[x] = stock * -1;
	  detention = 1;
	}
      else
	{
	  temp[x] = stock;
	  detention = 0;
	}
      temp[x] = temp[x] + '0';
      leni = leni - 1;
      lena = lena - 1;
      x = x + 1;
    }
  return (temp);
}
