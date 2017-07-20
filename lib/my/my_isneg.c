/*
** my_isneg.c for my_isneg in /home/the.psychopath/delivery/CPool_Day03
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Wed Oct  5 13:57:02 2016 Alexandre Di.rosa
** Last update Tue Dec 20 13:10:29 2016 Alexandre Di.rosa
*/

void	my_putchar(char c);

int	my_isneg(int n)
{
  int	negative;
  int	positive;

  negative = '-';
  positive = '+';
  if (n < 0)
    my_putchar(negative);
  else
    my_putchar(positive);
  return (0);
}
