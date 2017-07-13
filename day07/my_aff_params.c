/*
** my_aff-params.c for my_aff_params in /home/the.psychopath/delivery/day07
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Wed Oct 12 10:04:39 2016 Alexandre Di.rosa
** Last update Wed Oct 12 10:31:21 2016 Alexandre Di.rosa
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

  i = 0;
  while (i < argc)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
