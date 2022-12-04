/*
** EPITECH PROJECT, 2017
** my
** File description:
** my
*/

#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Window/Export.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/Audio.h>

typedef struct s_par
{
	sfRenderWindow	*window;
	sfTexture*	texture1;
	sfTexture*	texture2;
	sfTexture*	texture3;
	sfTexture*	texture4;
	sfTexture*	texture5;
	sfTexture*	texture6;
	sfTexture*	texture7;
	sfTexture*	texture8;
	sfTexture*	texture9;
	sfTexture*	texture10;
	sfTexture*	texture11;
	sfTexture*	texture12;
	sfTexture*	texture13;
	sfTexture*	texture14;
	sfTexture*	texture15;
	sfTexture*	texture16;
	sfTexture*	texture17;
	sfTexture*	texture18;
	sfVector2f	vect1;
	sfVector2f	vect2;
	sfVector2f	vect3;
	sfVector2f	vect4;
	sfVector2f	vect5;
	sfVector2f	vect6;
	sfVector2f	vect7;
	sfVector2f	vect8;
	sfVector2f	vect9;
	sfVector2f	vect10;
	sfVector2f	vect11;
	sfVector2f	vect12;
	sfVector2f	vect13;
	sfSprite*	sprite1;
	sfSprite*	sprite2;
	sfSprite*	sprite3;
	sfSprite*	sprite4;
	sfSprite*	sprite5;
	sfSprite*	sprite6;
	sfSprite*	sprite7;
	sfSprite*	sprite8;
	sfSprite*	sprite9;
	sfSprite*	sprite10;
	sfSprite*	sprite11;
	sfSprite*	sprite12;
	sfSprite*	sprite13;
	sfSprite*	sprite14;
	sfSprite*	sprite15;
	sfSprite*	sprite16;
	sfSprite*	sprite17;
	sfSprite*	sprite18;
	sfSprite*	sprite19;
	sfMusic*	music1;
	int		on;
	int		step;
	int		htp;
	int		corps;
	sfVector2f	mouse;
} t_par;

void	my_putchar(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char const *str);
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
int	my_put_nbr_base_p(long nb, char *base);
long	my_put_nbr_u(long nb);
long long	my_put_nbr_l(long long nb);
int	my_strlendir(char *filepath);
int	my_menu(t_par *par);
void	windowandmusic_init(t_par *par);
void	text_init(t_par *par);
void	sprite_init(t_par *par);
void	vect_init1(t_par *par);
void	vect_init2(t_par *par);
void	set_text(t_par *par);
void	set_pos(t_par *par);
void	drawsprite1(t_par *par);
void	drawsprite2(t_par *par);
void	drawsprite3(t_par *par);
void	rpg_main_win(void);
