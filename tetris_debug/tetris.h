/*
** tetris.h for tetris in /home/the.psychopath/delivery/test_boot_ex
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Mon Feb 27 12:47:47 2017 Alexandre Di.rosa
** Last update Sat Mar 18 10:29:53 2017 Alexandre Di.rosa
*/

#ifndef TETRIS_H_
# define TETRIS_H_

#include "my.h"

#define KEY_TURN_ "--key-turn"
#define KEY_RIGHT_ "--key-right"
#define KEY_LEFT_ "--key-left"
#define KEY_DROP_ "--key-drop"
#define KEY_QUIT_ "--key-quit"
#define KEY_PAUSE_ "--key-pause"
#define LEVEL_ "--level"
#define MOVE_TO_ "Move the tetrimino "
#define USING_ " using the K key (def:"

typedef struct	s_data
{
  char	*key_turn_;
  char	*key_right_;
  char	*key_left_;
  char	*key_drop_;
  char	*key_quit_;
  char	*key_pause_;
  int	next_;
  int	debug_;
  int	level_;
}		t_data;

void	init_tab_option(int (*ft[12]) (int, char **, t_data *), t_data *);
int	game();
int	aff_help(int, char **, t_data *);
int	debug_option(int, char **, t_data *);
int	key_parse_options(int, char **, t_data *);
int	map_option(int, char **, t_data *);
int	next_option(int, char **, t_data *);
int	level_option(int, char **, t_data *);
int	key_right_option(int, char **, t_data *);
int	key_left_option(int, char **, t_data *);
int	key_turn_option(int, char **, t_data *);
int	key_drop_option(int, char **, t_data *);
int	key_quit_option(int, char **, t_data *);
int	key_pause_option(int, char **, t_data *);
void	default_key(t_data *);

#endif /* !TETRIS_H_ */
