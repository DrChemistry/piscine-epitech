/*
** my_get_nbr.c for my_get_nbr in /home/the.psychopath/delivery/test_boot_ex/navy_test1/map/lib/my
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Sat Jan 28 13:54:29 2017 Alexandre Di.rosa
** Last update Sun Jan 29 20:15:58 2017 Alexandre Di.rosa
*/

int	my_strlen(char *);

int	my_get_nbr(char *str)
{
  int	x;
  int	boucle;
  int	dest;

  boucle = 1;
  x = my_strlen(str) - 1;
  dest = 0;
  while (x >= 0 && str[x] >= '0' && str[x] <= '9')
    {
      dest = dest + (str[x] - 48) * boucle;
      --x;
      boucle = boucle * 10;
    }
  if (str[x] == '-')
    dest = dest * -1;
  return (dest);
}
