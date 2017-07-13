/*
** rush.c for rush in /home/bonoro_p/Colles_Piscine/CPool_rush1
** 
** Made by Paul Bonoron
** Login   <bonoro_p@epitech.net>
** 
** Started on  Sat Oct  8 14:46:09 2016 Paul Bonoron
** Last update Sun Oct  9 10:20:33 2016 Alexandre Di.rosa
*/

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int     my_put_errors(int x, int y)
{
  int	n;

  n = 0;
  if (x <= 0 || y <= 0)
    {
      my_putstr("Invalid size\n");
      n = n + 1;
    }
  else if (x > 2147483647 || y > 2147483647)
    {
      my_putstr("Invalid size\n");
      n = n + 1;
    }
  return (n);
}


void	rush(int x, int y)
{
  int	abs;
  int	ord;
  int	ret;

  ord = y - 2;
  abs = x - 2;
  ret = my_put_errors(x, y);
  if (ret >= 1)
    return (0);
  if (x == 1)
    my_putchar('o');
  else
    oline(abs);
  my_putchar('\n');
  while (ord > 0)
    {
      blankline(abs);
      ord = ord - 1;
    }
  if (y > 1 && x > 1)
    {
      oline(abs);
      my_putchar('\n');
    }
  else if (x == 1 && y > 1)
    {
      my_putchar('o');
      my_putchar('\n');
    }
}

void	blankline(int n)
{
  if (n > 1)
    my_putchar('|');
  while (n > 0)
    {
      my_putchar(' ');
      n = n - 1;
    }
  my_putchar('|');
  my_putchar('\n');
}

void	oline(int n)
{
  my_putchar('o');
  while (n > 0)
    {
      my_putchar('-');
      n = n - 1;
    }
  my_putchar('o');
}
