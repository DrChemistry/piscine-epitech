/*
** dante.h for dante in /home/the.psychopath/delivery/dante
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Tue Apr 11 15:32:40 2017 Alexandre Di.rosa
** Last update Tue Apr 11 16:51:12 2017 Alexandre Di.rosa
*/

#ifndef DANTE_H
# define DANTE_H

int	check_maze(char **);
char	**solve_maze(char **);
char	**get_maze(int, char **);
int	check_path(char **, int *, int *);
int	go_back(char **, int *, int *);

#endif /* !DANTE_H */
