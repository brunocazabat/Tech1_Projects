/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** inventory
*/

#include "../include/flo.h"

void	draw_inv(data_t *d)
{
	sfRenderWindow_clear(d->winrpg, sfBlack);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_space, NULL);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_map, NULL);
	sfRenderWindow_drawSprite(d->winrpg, d->cspr, NULL);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_inventory, NULL);
	sfText_setString(d->text_stats, save_cat(d));
	if (sfKeyboard_isKeyPressed(sfKeyI)) {
		while (1)
			if (sfKeyboard_isKeyPressed(sfKeyI) == sfFalse)
				break;
		d->inv_stat = 84;
	}
}

void	fct_stats(data_t *d)
{
	sfRenderWindow_drawText(d->winrpg, d->text_stats, NULL);
}

void	fct_exit(data_t *d)
{
	if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
		while (1)
			if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfFalse)
				break;
		d->inv_stat = 84;
	}
}

void	change_inv_stat(data_t *d)
{
	if (sfKeyboard_isKeyPressed(sfKeyDown) && d->inv_stat < 2) {
		d->inv_stat = d->inv_stat + 1;
		while (sfKeyboard_isKeyPressed(sfKeyDown)) {
		}
	}
	if (sfKeyboard_isKeyPressed(sfKeyUp) && d->inv_stat > 0) {
		d->inv_stat = d->inv_stat - 1;
		while (sfKeyboard_isKeyPressed(sfKeyUp)) {
		}
	}
}

void	manage_inv_stat(data_t *d)
{
	change_inv_stat(d);
	if (d->inv_stat == 0) {
		sfRenderWindow_drawSprite(d->winrpg, d->spr_stats, NULL);
		fct_stats(d);
	} else if (d->inv_stat == 1) {
		sfRenderWindow_drawSprite(d->winrpg, d->spr_bag, NULL);
	} else if (d->inv_stat == 2) {
		sfRenderWindow_drawSprite(d->winrpg, d->spr_exit, NULL);
		fct_exit(d);
	}
}

void	inventory_check(data_t *d)
{
	d->inv_stat = 0;
	if (sfKeyboard_isKeyPressed(sfKeyI)) {
		while (1)
			if (sfKeyboard_isKeyPressed(sfKeyI) == sfFalse)
				break;
		while (d->inv_stat != 84) {
			draw_inv(d);
			manage_inv_stat(d);
			sfRenderWindow_display(d->winrpg);
		}
	}
}
