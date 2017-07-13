/*
** my_sort_params.c for my_sort_params in /home/the.psychopath/delivery/day07
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Wed Oct 12 10:29:51 2016 Alexandre Di.rosa
** Last update Wed Oct 12 14:47:30 2016 Alexandre Di.rosa
*/
void my_putchar(char c)
{
  write (1, &c, 1);
}

int my_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int     my_strcmp(char *s1, char *s2)
{
  int   i;
  int   a;

  i = 0;
  while (s1[i] == s2[i])
    {
      i = i + 1;
      if (s1[i] == '\0' && s2[i] == '\0')
	return (0);
    }
  if (s1[i] > s2[i] || s1[i] < s2[i])
    {
      a = s1[i] - s2[i];
      return (a);
    }
}

int my_swap(int *a, int *b)
{
  int c;

  c = *a;
  *a = *b;
  *b = c;

  return (0);
}

void	my_sorting_table(char **tab, int size)
{
  int	i;
  int	b;
  char	*one;

  i = 0;
  b = i + 1;
  my_putchar('2');
  while(i <= size)
    {
      one = tab[i];
      my_putchar('1');
      while (my_strcmp(*one[i], *one[b]) > 0)
	{
	  my_putchar('0');
	  my_swap(one[i], one[b]);
	}
      i = i + 1;
      b = i + 1;
    }
}

int     main(int argc, char**argv)
{
  int   i;

  my_sorting_table(argv, argc);
  i = 0;
  my_putchar(3);
  while (argc > 1)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i= i - 1;
    }
}
