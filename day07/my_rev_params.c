/*
** my_rev_params.c for my_rev_params in /home/the.psychopath/delivery/day07
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Wed Oct 12 10:21:41 2016 Alexandre Di.rosa
** Last update Wed Oct 12 10:29:14 2016 Alexandre Di.rosa
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	main(int argc, char**argv)
{
  int	i;

  i = argc - 1;
  while (i != 0)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i= i - 1;
    }
}
