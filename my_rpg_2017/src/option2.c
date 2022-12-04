/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** manage option menu file 02
*/

#include "../include/flo.h"

void	set_strkey2(data_t *d)
{
	if (d->K_Up < 26) {
		d->str_keyUp = malloc(sizeof(char) * 2);
		d->char_Up = 'A' + d->K_Up;
		d->str_keyUp[0] = d->char_Up;
		d->str_keyUp[1] = 0;
	} else {
		d->str_keyUp = malloc(sizeof(char) * 8);
		d->str_keyUp = set_str_specialkey(d->K_Up);
	}
	if (d->K_Down < 26) {
		d->str_keyDown = malloc(sizeof(char) *2);
		d->char_Down = 'A' + d->K_Down;
		d->str_keyDown[0] = d->char_Down;
		d->str_keyDown[1] = 0;
	} else {
		d->str_keyDown = malloc(sizeof(char) * 8);
		d->str_keyDown = set_str_specialkey(d->K_Down);
	}
}

void	set_strkey(data_t *d)
{
	if (d->K_Left < 26) {
		d->str_keyLeft = malloc(sizeof(char) * 2);
		d->char_Left = 'A'+ d->K_Left;
		d->str_keyLeft[0] = d->char_Left;
		d->str_keyLeft[1] = 0;
	} else {
		d->str_keyLeft = malloc(sizeof(char) * 8);
		d->str_keyLeft = set_str_specialkey(d->K_Left);
	}
	if (d->K_Right < 26) {
		d->str_keyRight = malloc(sizeof(char) * 2);
		d->char_Right = 'A' + d->K_Right;
		d->str_keyRight[0] = d->char_Right;
		d->str_keyRight[1] = 0;
	} else {
		d->str_keyRight = malloc(sizeof(char) *8);
		d->str_keyRight = set_str_specialkey(d->K_Right);
	}
	set_strkey2(d);
}

void	set_textString(data_t *d)
{
	set_strkey(d);
	sfText_setString(d->text_Left, d->str_keyLeft);
	sfText_setString(d->text_Right, d->str_keyRight);
	sfText_setString(d->text_Up, d->str_keyUp);
	sfText_setString(d->text_Down, d->str_keyDown);
}

void	bindkey_loop(data_t *d)
{
	eventclose(d);
	while (sfRenderWindow_pollEvent(d->winrpg, &d->eventrpg))
		if (d->eventrpg.type == sfEvtKeyPressed) {
			d->menu_stat = 61;
			if (d->opt_stat == 2)
				d->K_Left = d->eventrpg.key.code;
			if (d->opt_stat == 3)
				d->K_Right = d->eventrpg.key.code;
			if (d->opt_stat == 4)
				d->K_Up = d->eventrpg.key.code;
			if (d->opt_stat == 5)
				d->K_Down = d->eventrpg.key.code;
		}
}

void	bind_key(data_t *d)
{
	if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
		while (1)
			if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfFalse)
				break;
		if (d->opt_stat > 1) {
			d->tex_keyb = sfTexture_createFromFile("Sprite/Select_keybiding2.png", NULL);
			sfSprite_setTexture(d->spr_keyb, d->tex_keyb, sfTrue);
			sfRenderWindow_drawSprite(d->winrpg, d->spr_keyb, NULL);
			sfRenderWindow_display(d->winrpg);
			while (1) {
				bindkey_loop(d);
				if (d->menu_stat == 61) {
					break;
				}
			}
		}
	}
	d->tex_keyb = sfTexture_createFromFile("Sprite/Select_keybiding.png", NULL);
	sfSprite_setTexture(d->spr_keyb, d->tex_keyb, sfTrue);
	d->menu_stat = 0;
}
