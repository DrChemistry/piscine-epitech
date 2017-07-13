/*
** rush3.c for rush3 in /home/Pandarkricci/CPool_rush3
** 
** Made by Lucas Ricci
** Login   <lucas.ricci@epitech.net>
** 
** Started on  Sat Oct 29 17:33:40 2016 Lucas Ricci
** Last update Sat Oct 29 17:36:41 2016 Alexandre Di.rosa
*/

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include "my.h"

int	my_put_errors(char *buffer)
{
  int	i;

  i = 0;
  while (buffer[i] != '\0')
    {
      if (buffer[i] != '*' &&
	  buffer[i] != '-' &&
	  buffer[i] != '|' &&
	  buffer[i] != 'A' &&
	  buffer[i] != 'B' &&
	  buffer[i] != 'C' &&
	  buffer[i] != 92 &&
	  buffer[i] != '/' &&
	  buffer[i] != '\n' &&
	  buffer[i] != ' ' &&
	  buffer[i] != 'o')
	{
	  write(1, "Wrong square\n", 13);
	  return (84);
	}
      i = i + 1;
    }
}

char	*square(char *buffer, int colonne, int ligne)
{
  int	i;

  i = 0;
  if (buffer[0] == 'o')
    return ("[rush1-1] ");
  if (buffer[0] == '*' || buffer[0] == '/')
    return ("[rush1-2] ");
  if (buffer[0] == 'B')
    {
      my_putstr("[rush1-3] 1 ");
      my_put_nbr(ligne);
      my_putstr(" | [rush1-4] 1 ");
      my_put_nbr(ligne);
      return (" | [rush1-5] ");
    }
  while (buffer[i] != '\n')
    i = i + 1;
  if (buffer[i - 1] == 'A')
    return ("[rush1-3] ");
  i = my_strlen(buffer) - 2;
  if (buffer[i] == 'C')
    return ("[rush1-4] ");
  if (buffer[i] == 'A')
    return ("[rush1-5] ");
  return ("none");
}

int	rush3(char *buffer)
{
  int	i;
  int	ligne;
  int	colonne;
  int	count;

  i = 0;
  ligne = 0;
  colonne = 0;
  count = 0;
  if (my_put_errors(buffer) > 0)
    return (84);
  while (buffer[i] != '\0')
    {
      if (buffer[i] == '\n')
	ligne = ligne + 1;
      if (ligne == 0)
	colonne = colonne + 1;
      i = i + 1;
    }
  my_putstr(square(buffer, colonne, ligne));
  if (read(0, buffer, 1) == 'n')
    return (84);
  my_put_nbr(colonne);
  my_putchar(' ');
  my_put_nbr(ligne);
  my_putchar('\n');
}

int	main()
{
  char	buff[4097];
  int	len;

  if ((len = read(0, buff, 4096)) < 0)
    return (84);
  if (rush3(buff) > 0)
    return (84);
  return (0);
}
