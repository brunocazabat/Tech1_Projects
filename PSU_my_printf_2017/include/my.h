/*
** EPITECH PROJECT, 2017
** libmy.h
** File description:
** libmy.h
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	my_putchar(char c);
void	my_put_nbr(int nb);
int	my_isneg(int nb);
void	my_swap(int *a,int *b);
int	my_putstr(char const *str);
int	my_strlen(char const *str);
int	my_getnbr(char const *str);
void	my_sort_int_array(int *tab, int size);
int	my_compute_power_rec(int nb,int power);
int	my_compute_square_root(int nb);
int	my_is_prime(int nb);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char const *src);
char	*my_strncpy(char *dest,char const *src,int n);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char const *to_find);
int	my_strcmp(char const *s1,char const *s2);
int	my_strncmp(char const *s1,char const *s2,int n);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char const *str);
int	my_str_isnum(char const *str);
int	my_str_islower(char const *str);
int	my_str_isupper(char const *str);
int	my_str_isprintable(char const *str);
int	my_showstr(char const *str);
int	my_showmem(char const *str, int size);
char	*my_strcat(char *dest,char const *src);
char	*my_strncat(char *dest,char const *src, int nb);
char	*my_strdup(char const *src);

int	flag_sort(char flag);
int	my_printf(char *fmt, ...);
void	print_char(va_list arg);
void	print_str(va_list arg);
void	print_putnbr(va_list arg);
void	print_modulo();
void	print_hexa(va_list arg);
void    print_bin(va_list arg);
void    print_octal(va_list arg);
void    print_S(va_list arg);
void    print_deci(va_list arg);
void    print_pointeur(va_list arg);
void	print_HEXA(va_list arg);
int	my_put_nbr_long(long nb);
int	my_put_nbr_base(int nb, char *base);
int	my_put_non_printable(int nb);
int	my_put_nbr_base_np(int nb, char *base);
