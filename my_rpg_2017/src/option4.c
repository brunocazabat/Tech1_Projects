/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** option4
*/

#include "../include/flo.h"

char	*set_str_specialkey(sfKeyCode key)
{
	char *str;

	if (key == 71)
		str = "<-\0";
	else if (key == 72)
		str = "->\0";
	else if (key == 73)
		str = "Up\0";
	else if (key == 74)
		str = "Down\0";
	else if (key == sfKeyReturn)
		str = "Enter\0";
	else if (key == sfKeySpace)
		str = "Space\0";
	else
		str = "???\0";
	return (str);
}

void	check_opt_fct3(data_t *d)
{
	if (d->opt_stat == 5) {
		d->pos_keyb.y = 618;
		sfRenderWindow_drawSprite(d->winrpg, d->spr_keyb, NULL);
		bind_key(d);
	}
	if (d->opt_stat == 6) {
		d->pos_keyb.y = 764;
		sfRenderWindow_drawSprite(d->winrpg, d->spr_keyb, NULL);
	}
}
