/*
** EPITECH PROJECT, 2017
** my
** File description:
** my
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	my_putchar(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char const *str);
int	my_strlen(char const *str);
int	my_getnbr(char const *str);
void	my_sort_int_array(int *tab, int size);
int	my_compute_power_rec(int nb, int power);
int	my_compute_square_root(int nb);
int	my_is_prime(int nb);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char const *src);
char	*my_strncpy(char *dest, char const *src, int n);
char	*my_revstr(char *str);
char	*my_strstr(char const *str, char const *to_find);
int	my_strcmp(char const *s1, char const *s2);
int	my_strncmp(char const *s1, char const *s2, int n);
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
char	*my_strcat(char *dest, char const *src);
char	*my_strncat(char * dest, char const *src, int nb);
char	*my_strdup(char const *str);
int	sort_flag(char flag);
int	my_printf(char *format, ...);
void	print_nbr(va_list arg);
void	print(va_list arg);
void	print_str(va_list arg);
void	print_modulo(va_list arg);
int	my_put_nbr_base(int nb, char *base);
void	print_octal(va_list arg);
void	print_hexa(va_list arg);
void	print_hexa_x(va_list arg);
void	print_hexa_X(va_list arg);
void	print_bina(va_list arg);
void	print_hexa_p(va_list arg);
void	print_nbr_l(va_list arg);
void	print_nbr_u(va_list arg);
int	my_put_nbr_base_p(long nb, char *base);
long	my_put_nbr_u(long nb);
long long	my_put_nbr_l(long long nb);
int	my_strlendir(char *filepath);
char	**sort_a(int ac, char **tab);
void	check_mystr(int ac, char **av);
char	**sort_time(struct tm *sa, char ** time);
char	**alloc_time(char **tab);
int	my_nbfiles(char **tab);
void	d_flag(char *flag, char **files, char **dir);
void	t_flag(char *flag, char **files, char **dir);
int	sort_files(char *flags, int ac, char **av);
void	body_flags(char *flags, char **files, char **dir);
int	print_o(int ac, char **av);
int	print_n(int ac, char **av);
char	*sort_flags(char **av);
char	*check_flags(char *to_check);
int	invalid_flag(char flag);
void	tab_pointer(int tmp, va_list ap);
