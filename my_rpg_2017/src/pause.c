/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** manage pause menu
*/

#include "../include/flo.h"

void	check_pause_fct(data_t *d)
{
	if (d->menu_stat == 0) {
		sfRenderWindow_drawSprite(d->winrpg, d->spr_res1, NULL);
		if (sfKeyboard_isKeyPressed(sfKeyReturn))
			d->menu_stat = -1;
	} else if (d->menu_stat == 1) {
		sfRenderWindow_drawSprite(d->winrpg, d->spr_opt1, NULL);
		if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
			while (1)
				if (sfKeyboard_isKeyPressed(sfKeyReturn)
				== sfFalse)
					break;
			d->opt_stat = 0;
			option_menu(d);
		}
	} else if (d->menu_stat == 2) {
		sfRenderWindow_drawSprite(d->winrpg, d->spr_quit1, NULL);
		if (sfKeyboard_isKeyPressed(sfKeyReturn))
			close_game(d);
	}
}

void	check_status(data_t *d)
{
	if (sfKeyboard_isKeyPressed(sfKeyDown) && d->menu_stat < 2) {
		d->menu_stat = d->menu_stat + 1;
		while (sfKeyboard_isKeyPressed(sfKeyDown)) {
		}
	}
	if (sfKeyboard_isKeyPressed(sfKeyUp) && d->menu_stat > 0) {
		d->menu_stat = d->menu_stat - 1;
		while (sfKeyboard_isKeyPressed(sfKeyUp)) {
		}
	}
}

void	draw_spr_pause(data_t *d)
{
	eventclose(d);
	sfRenderWindow_clear(d->winrpg, sfBlack);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_menu_pause, NULL);
	check_status(d);
	check_pause_fct(d);
	sfRenderWindow_display(d->winrpg);
}

void	pause_menu(data_t *d)
{
	if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
		d->menu_stat = 0;
		while (d->menu_stat != -1) {
			draw_spr_pause(d);
		}
	}
}
