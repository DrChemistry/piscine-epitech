/*
** my_strncat.c for my_strncat in /home/the.psychopath/delivery/day07
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Wed Oct 12 09:46:37 2016 Alexandre Di.rosa
** Last update Tue Dec 20 13:08:57 2016 Alexandre Di.rosa
*/

void	my_putstr(char *);

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  nb = nb - 1;
  while (dest[i] != '\0')
    {
      i = i + 1;
    }
  while (n <= nb)
    {
      dest[i] = src[n];
      i = i + 1;
      n = n + 1;
    }
  my_putstr(dest);
}
