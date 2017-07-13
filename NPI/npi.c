/*
** npi.c for npi in /home/the.psychopath/delivery/CPool_bistro-matic/di-rosa/NPI
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Wed Nov  2 14:43:35 2016 Alexandre Di.rosa
** Last update Sat Nov  5 16:00:51 2016 Alexandre Di.rosa
*/

#include <unistd.h>
#include <stdio.h>
#include "npialgo.h"
#include "my.h"
#include <stdlib.h>

char	*neg_get(char *numbers)
{
  int	x;

  x = 0;
  while (numbers[x] != '\0')
    {
      if (numbers[x] == 'n')
	numbers[x] = '-';
      x = x + 1;
    }
  return (numbers);
}

int	epur_begin(char *numbers)
{
  int	x;

  if (numbers[0] == ' ')
    x = 1;
  else
    x = 0;
  return (x);
}

char	*epur_end(char *numbers)
{
  int	x;

  x = my_strlen(numbers) - 1;
  if (numbers[x] == ' ')
    numbers[x] = '\0';
  return (numbers);
}

char	*epur_str(char *numbers)
{
  char	*res;
  int	x;
  int	y;

  x = epur_begin(numbers);
  y = 0;
  res = malloc(sizeof(char) * my_strlen(numbers));
  while (numbers[x] != '\0')
    {
      if (numbers[x] == ' ')
	{
	  res[y] = numbers[x];
	  y = y + 1;
	  while (numbers[x] == ' ' && numbers[x] != '\0')
	    x = x + 1;
	}
      res[y] = numbers[x];
      y = y + 1;
      if (numbers[x] != '\0')
	x = x + 1;
    }
  numbers = epur_end(res);
  return (res);
}

int	main(int ac, char **av)
{
  char	*numbers;
  char	*operators;
  char	*res;

  operators = malloc(sizeof(char) * my_strlen(av[1]));
  numbers = malloc(sizeof(char) * (my_strlen(av[1]) + 1));
  numbers = get_neg(av[1]);
  res = malloc(sizeof(char) * (my_strlen(av[1]) * my_strlen(numbers)));
  numbers = swap_op_expr(numbers, operators, res);
  my_putstr(numbers);
  my_putchar('\n');
}

/*Ok les mecs, le programme marche parfait. Ceci est le fichier principale. La chaine numbers contient tous les nombres tous séparé par un espace sous cette forme par exemple "1 34 4 987890 -4" les '-' montrent les négatifs. Elle gère les priorités. La chaîne opérateurs contient tous les opérateurs. Les deux chaines se lisent en même temps de gauche à droite. Si des questions hésitez pas */
