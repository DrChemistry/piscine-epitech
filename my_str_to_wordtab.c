/*
** requirement.c for requirement in /home/the.psychopath/delivery/ADM_SBMLparser_2016
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Mon Jun 12 12:07:08 2017 Alexandre Di.rosa
** Last update Fri Jun 30 00:58:55 2017 Alexandre Di.rosa
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	my_strlen(char const *str)
{
  int	x;

  x = 0;
  while (str && str[x])
    ++x;
  return (x);
}

static char	**init_tab(char const *str, int *a, char c)
{
  char		**tab;
  int		x;
  int		i;

  x = 0;
  i = 0;
  while (str && str[x])
    {
      if (str[x] == c)
	++i;
      ++x;
    }
  if (!(tab = malloc(sizeof(char *) * (i + 2))))
    return (NULL);
  x = 0;
  while (str && str[x] && str[x] == c)
    {
      (*a)++;
      ++x;
    }
  return (tab);
}

static int	skip_car(char const *str, int x, char c)
{
  if (str[x])
    while (str && str[x] && str[x] == c)
      ++x;
  return (x);
}

char	**my_str_to_wordtab(char const *str, char c)
{
  char	**tab;
  int	x;
  int	i;
  int	b;

  x = 0;
  i = 0;
  if (!(tab = init_tab(str, &x, c)))
    return (NULL);
  while (str && str[x])
    {
      b = 0;
      if (!(tab[i] = malloc(sizeof(char) * (my_strlen(str) + 1))))
	return (NULL);
      while (str && str[x] && str[x] != c)
	tab[i][b++] = str[x++];
      tab[i][b] = '\0';
      x = skip_car(str, x, c);
      ++i;
    }
  tab[i] = NULL;
  return (tab);
}
