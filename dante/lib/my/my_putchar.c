/*
** my_putchar.c for my_putchar in /home/the.psychopath/delivery/CPool_Day04/filesenc
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Wed Oct 12 20:16:21 2016 Alexandre Di.rosa
** Last update Wed Apr  5 10:13:32 2017 Alexandre Di.rosa
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}
