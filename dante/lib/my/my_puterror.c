/*
** my_puterror.c for my_puterror in /home/the.psychopath/delivery/test_boot_ex/matchstick/lib/my
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Mon Feb 13 14:31:04 2017 Alexandre Di.rosa
** Last update Mon Feb 13 14:33:06 2017 Alexandre Di.rosa
*/

void	my_putchar(char c);

int	my_puterror(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      ++i;
    }
  return (84);
}
