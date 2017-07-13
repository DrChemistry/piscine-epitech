/*
** my_str_str.c for my_str_str in /home/the.psychopath/delivery/test_boot_ex/matchstick/lib/my
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Tue Feb 14 14:39:04 2017 Alexandre Di.rosa
** Last update Sat Feb 18 19:11:45 2017 Alexandre Di.rosa
*/

void	my_putchar(char);
void	my_putstr(char *);

void	my_str_str(char **str, int x)
{
  int	y;

  y = 0;
  while (y < x)
    {
      my_putchar('*');
      my_putstr(str[y]);
      my_putchar('*');
      my_putchar('\n');
      ++y;
    }
}
