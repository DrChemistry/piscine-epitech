/*
** multinf.c for multinf in /home/the.psychopath/delivery/multinf
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Mon Oct 31 13:59:39 2016 Alexandre Di.rosa
** Last update Mon Oct 31 16:46:53 2016 Alexandre Di.rosa
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include "my.h"

char	mult(char *nb1, char *nb2, char *res)
{
  int	leni;
  int	lena;
  int	detention;
  int	rescase;

  detention = 0;
  rescase = 0;
  leni = my_strlen(nb1) - 1;
  lena = my_strlen(nb2) - 1;
  *nb1 = ascii(nb1);
  *nb2 = ascii(nb2);
  *nb1 = trans(nb1);
  *nb2 = trans(nb2);
  while (leni >= 0)
    {
      if (lena < 0)
	res[rescase] = nb1[leni] + detention;
      else
	res[rescase] = (nb1[leni] * nb2[lena]) + detention;
      if (res[rescase] > 9)
	{
	  detention = getdet(res[rescase]);
	  res[rescase] = (res[rescase]) % 10;
	}
      else
	detention = 0;
      res[rescase] = res[rescase] + '0';
      leni = leni - 1;
      lena = lena - 1;
      rescase = rescase + 1;
    }
  res[rescase] = detention + 48;
  return (*res);
}

int	main(int ac, char **av)
{
  int	i;
  char	*res;

  res = malloc(sizeof(char) *(my_strlen(av[1]) + my_strlen(av[2]) + 1));
  *res = mult(av[1], av[2], res);
  print_res(res);
  return (0);
}
