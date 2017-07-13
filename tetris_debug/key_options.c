/*
** key_options.c for key_option in /home/the.psychopath/delivery/test_boot_ex
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Fri Mar  3 14:24:58 2017 Alexandre Di.rosa
** Last update Sat Mar 18 10:29:33 2017 Alexandre Di.rosa
*/

#include <tetris.h>
#include <unistd.h>

int	key_right_option(int x, char **av, t_data *data)
{
  data->key_right_ = av[optind - 1];
  return (0);
}

int	key_left_option(int x, char **av, t_data *data)
{
  data->key_left_ = av[optind - 1];
  return (0);
}

int	key_drop_option(int x, char **av, t_data *data)
{
  data->key_drop_ = av[optind - 1];
  return (0);
}

int	key_quit_option(int x, char **av, t_data *data)
{
  data->key_quit_ = av[optind - 1];
  return (0);
}

int	key_pause_option(int x, char **av, t_data *data)
{
  data->key_pause_ = av[optind - 1];
  return (0);
}

int	key_turn_option(int x, char **av, t_data *data)
{ 
  data->key_turn_ = av[optind - 1];
  return (0);
}

int	debug_option(int x, char **av, t_data *data)
{
  data->debug_ = 1;
  return (0);
}

int	key_parse_options(int x, char **av, t_data *data)
{
  data->key_right_ = av[optind];
  ++optind;
  return (0);
}

int	map_option(int x, char **av, t_data *data)
{
  data->key_right_ = av[optind];
  ++optind;
  return (0);
}

int	next_option(int x, char **av, t_data *data)
{
  data->next_ = 0;
  return (0);
}

int	level_option(int x, char **av, t_data *data)
{
  data->level_ = my_get_nbr(av[optind - 1]);
  return (0);
}
