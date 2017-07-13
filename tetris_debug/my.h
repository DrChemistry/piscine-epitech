/*
** my.h for my in /home/the.psychopath/delivery/CPool_Day09/include
** 
** Made by Alexandre Di.rosa
** Login   <the.psychopath@epitech.net>
** 
** Started on  Fri Oct 14 10:12:44 2016 Alexandre Di.rosa
** Last update Sat Mar 18 10:31:50 2017 Alexandre Di.rosa
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>

int	my_swap(int *a, int *b);
char	*strupcase(char *str);
int	my_strncpy(char *dest, char *src, int n);
char	*my_strncat(char *dest, char *src, int nb);
int	my_strlen(char *str);
int	my_str_isprintable(char *str);
int	my_str_islower(char *str);
char	*my_strcpy(char *dest, char *src);
char	*my_strcat(char *dest, char *src);
int	my_square_root(int nb);
int	my_showstr(char *str);
char	my_revstr(char *str);
int	my_put_nbr(int nb);
int	negmax();
int	my_power_rec(int nb, int power);
int	my_isneg(int n);
int	my_find_prime_sup(int nb);
int	my_getnbr(char *str);
int	my_is_prime(int nombre);
void	my_putchar(char c);
int	my_putstr(char *str);
int	my_showmen(char *str, int size);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_strcmp(char *s1, char *s2);
int	my_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_str_isupper(char *str);
char	*my_strlowcase(char *str);
int	my_strncmp(char *s1, char *s2, int n);
int	*my_strstr(char *str, char *to_find);
int	my_get_nbr(char *);
int	my_puterror(char *);
void	my_str_str(char **, int);
char    *get_next_line(const int);
char    *large_reading(const int, char *, int);
int     put_old(char *rest, char *str, int b);
void    save_char(char *, int, char *);
void    nsigned_oct2(unsigned int i, int base);
void    nsigned_hex2(unsigned int i, int base);
int     dec(va_list ap, char *str, int x);
int     nsigned_oct(va_list ap, char *str, int x);
int     nsigned_dec(va_list ap, char *str, int x);
int     nsigned_hex(va_list ap, char *str, int x);
int     nsigned_hex_maj(va_list ap, char *str, int x);
int     chara(va_list ap, char *str, int x);
int     string(va_list ap, char *str, int x);
int     pointer(va_list ap, char *str, int x);
int     binary(va_list ap, char *str, int x);
int     string_oct(va_list ap, char *str, int x);
int     get_nbr2(char *str, int *x);
void    write_blank(int space);
int     minusft(va_list ap, char *str, int x);
int     plusft(va_list ap, char *str, int x);
int     spaceft(va_list ap, char *str, int x);
int     diezft(va_list ap, char *str, int x);
int     blankft(va_list ap, char *str, int x);
void    init_tab(int (*ft_print[9])(va_list ap, char *str, int x));
void    my_printf(char *str, ...);
void    nsigned_hex3(unsigned int i, int base);
void    pointer2(unsigned long i, int base);
int     check_flags_printf(int x, char *flags, char *str, int (*ft_print[11])(va_list ap, char *str, int x), va_list ap);

#endif /* !MY_H_ */
