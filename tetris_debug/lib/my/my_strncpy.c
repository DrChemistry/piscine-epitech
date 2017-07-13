/*
** my_strcncpy.c for my_strcnpy in /home/the.psychopath/delivery/CPool_Day06
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Mon Oct 10 15:15:21 2016 Alexandre Di.rosa
** Last update Sat Dec 10 12:27:21 2016 Alexandre Di.rosa
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (dest[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
