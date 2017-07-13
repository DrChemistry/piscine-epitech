/*
** main.c for main in /home/the.psychopath/delivery/test_boot_ex
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Mon Feb 27 12:45:39 2017 Alexandre Di.rosa
** Last update Sat Mar 18 10:50:32 2017 Alexandre Di.rosa
*/

#include <curses.h>
#include <unistd.h>
#include <getopt.h>
#include <stdlib.h>
#include <stdio.h>
#include <term.h>
#include "tetris.h"

int		main(int ac, char **av)
{
  int		x;
  int		s;
  t_data	data;
  char		*options;
  int		(*ft_key_options[12]) (int, char **, t_data *);
  struct option	long_option[] = {
    {"debug", 0, NULL, 'd'},
    {"key-right", 1, NULL, '0'},
    {"key-left", 1, NULL, '1'},
    {"key-turn", 1, NULL, '2'},
    {"key-drop", 1, NULL, '3'},
    {"key-quit", 1, NULL, '4'},
    {"key-pause", 1, NULL, '5'},
    {"map-size", 1, NULL, 'm'},
    {"without-next", 0, NULL, 'w'},
    {"help", 0, NULL, 'h'},
    {"level", 1, NULL, 'l'},
    {NULL, 0, NULL, 0}
  };
  options = "dkmwhl012345";
  s = 0;
  default_key(&data);
  init_tab_option(ft_key_options, &data);
  while ((x = getopt_long(ac, av, "dk:wl:", long_option, NULL)) != -1)
    {
      while (x != options[s] && options[s] != '\0')
	++s;
      if (options[s] != '\0')
	ft_key_options[s] (x, av, &data);
    }
  return (game());
}

void	default_key(t_data *data)
{
  setupterm(NULL, 0, NULL);
  data->key_turn_ = tigetstr("kcuu1");
  data->key_left_ = tigetstr("kcub1");
  data->key_right_ = tigetstr("kcuf1");
  data->key_drop_ = tigetstr("kcud1");
  data->key_quit_ = "q";
  data->key_pause_ = " ";
}

void	init_tab_option(int (*ft[12]) (int, char **, t_data *), t_data *data)
{
  ft[0] = &debug_option;
  ft[1] = &key_parse_options;
  ft[2] = &map_option;
  ft[3] = &next_option;
  ft[4] = &aff_help;
  ft[5] = &level_option;
  ft[6] = &key_right_option;
  ft[7] = &key_left_option;
  ft[8] = &key_turn_option;
  ft[9] = &key_drop_option;
  ft[10] = &key_quit_option;
  ft[11] = &key_pause_option;
}

int    	aff_help(int x, char **av, t_data *data)
{
  my_putstr("Usage:\t./tetris [options]\nOptions:\n");
  my_printf("--help\t\t\tDisplay this help\n");
  my_printf("-l %s={num}\tStart Tetris at level num (def: 1)\n", LEVEL_);
  my_printf("-kl %s={K}\t%sLEFT%sleft arrow)\n", KEY_LEFT_, MOVE_TO_, USING_);
  my_printf("-kr %s={K}\t%sRIGHT%s", KEY_RIGHT_, MOVE_TO_, USING_);
  my_printf("right arrow)\n");
  return (0);
}

int	game()
{
  return (0);
}
