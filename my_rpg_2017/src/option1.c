/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** manage option menu file 01
*/

#include "../include/flo.h"

void	check_opt_fct2(data_t *d)
{
	if (d->opt_stat == 3) {
		d->pos_keyb.y = 328;
		sfRenderWindow_drawSprite(d->winrpg, d->spr_keyb, NULL);
		bind_key(d);
	}
	if (d->opt_stat == 4) {
		d->pos_keyb.y = 472;
		sfRenderWindow_drawSprite(d->winrpg, d->spr_keyb, NULL);
		bind_key(d);
	}
	if (d->opt_stat == 4) {
		d->pos_keyb.y = 472;
		sfRenderWindow_drawSprite(d->winrpg, d->spr_keyb, NULL);
		bind_key(d);
	}
	check_opt_fct3(d);
}

void	check_opt_fct(data_t *d)
{
	set_textString(d);
	sfSprite_setPosition(d->spr_keyb, d->pos_keyb);
	if (d->opt_stat == 0) {
		sfRenderWindow_drawSprite(d->winrpg, d->spr_back1, NULL);
		if (sfKeyboard_isKeyPressed(sfKeyReturn))
			d->opt_stat = -1;
	}
	if (d->opt_stat == 1) {
		sfRenderWindow_drawSprite(d->winrpg, d->spr_sound1, NULL);
		fct_sound(d);
	}
	if (d->opt_stat == 2) {
		d->pos_keyb.y = 181;
		sfRenderWindow_drawSprite(d->winrpg, d->spr_keyb, NULL);
		bind_key(d);
	}
	check_opt_fct2(d);
}

void	draw_opt(data_t *d)
{
	sfRenderWindow_drawSprite(d->winrpg, d->spr_menu_pause, NULL);
	sfRenderWindow_drawText(d->winrpg, d->text_Left, NULL);
	sfRenderWindow_drawText(d->winrpg, d->text_Right, NULL);
	sfRenderWindow_drawText(d->winrpg, d->text_Up, NULL);
	sfRenderWindow_drawText(d->winrpg, d->text_Down, NULL);
	sfSprite_setTextureRect(d->spr_sound, d->rect_sound);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_sound, NULL);
}

void	loop_opt(data_t *d)
{
	eventclose(d);
	sfRenderWindow_clear(d->winrpg, sfBlack);
	draw_opt(d);
	change_opt_stat(d);
	check_opt_fct(d);
	sfRenderWindow_display(d->winrpg);
}

void	option_menu(data_t *d)
{
	d->opt_stat = 0;
	d->tex_menu_pause = sfTexture_createFromFile
		("Sprite/Menu_option.png", NULL);
	sfSprite_setTexture(d->spr_menu_pause, d->tex_menu_pause, sfTrue);
	while (1) {
		loop_opt(d);
		if (d->opt_stat == -1) {
			d->tex_menu_pause = sfTexture_createFromFile
				("Sprite/Menu_pause2.png", NULL);
			sfSprite_setTexture(d->spr_menu_pause,
					d->tex_menu_pause, sfTrue);
			break;
		}
	}
}
