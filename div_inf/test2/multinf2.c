#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include "my.h"

char	*mult4(char *nb1, char *nb2, char *res)
{
  int	leni;
  int	lena;
  int	rescase;
  int	detention;
  int	taille_max;
  int	lena2;
  int	loop;

  loop = 0;
  detention = 0;
  rescase = 0;
  leni = my_strlen(nb1) - 1;
  lena = my_strlen(nb2) - 1;
  lena2 = lena;
  *nb1 = ascii(nb1);
  *nb2 = ascii(nb2);
  res = flush_me(res);
  while (leni >= 0)
    {
      while (lena >= 0)
	{
	  res[rescase] = res[rescase] + (nb1[leni] * nb2[lena]) + detention;
	  if (res[rescase] > 9)
	    {
	      detention = getdet(res[rescase]);
	      res[rescase] = res[rescase] % 10;
	    }
	  else
	    detention = 0;
	  lena = lena - 1;
	  rescase = rescase + 1;
	}
      loop = loop + 1;
      *res = detfinal(detention, rescase, res);
      detention = 0;
      leni = leni - 1;
      lena = lena2;
      taille_max = rescase;
      rescase = loop;
    }
  res = re_ascii(res, taille_max);
  my_putchar('\n');
  return (res);
}

char	*mult3(char *nb1, char *nb2, char *res)
{
  int	leni;
  int	lena;
  int	rescase;
  int	detention;
  int	taille_max;
  int	leni2;
  int	loop;

  loop = 0;
  detention = 0;
  rescase = 0;
  leni = my_strlen(nb1) - 1;
  lena = my_strlen(nb2) - 1;
  leni2 = leni;
  *nb1 = ascii(nb1);
  *nb2 = ascii(nb2);
  res = flush_me(res);
  while (lena >= 0)
    {
      while (leni >= 0)
	{
	  res[rescase] = res[rescase] + (nb1[leni] * nb2[lena]) + detention;
	  if (res[rescase] > 9)
	    {
	      detention = getdet(res[rescase]);
	      res[rescase] = res[rescase] % 10;
	    }
	  else
	    detention = 0;
	  leni = leni - 1;
	  rescase = rescase + 1;
	}
      loop = loop + 1;
      *res = detfinal(detention, rescase, res);
      detention = 0;
      lena = lena - 1;
      leni = leni2;
      taille_max = rescase;
      rescase = loop;
    }
  res = re_ascii(res, taille_max);
  my_putchar('\n');
  return (res);
}

char	*mult2(char *nb1, char *nb2, char *res)
{
  int	leni;
  int	lena;
  int	rescase;

  rescase = 0;
  leni = my_strlen(nb1) - 1;
  lena = my_strlen(nb2) - 1;
  if (leni >= lena)
    res = mult3(nb1, nb2, res);
  else
    res = mult4(nb1, nb2, res);
  print_res(res);
  return (res);
}
