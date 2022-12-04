/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** manage option menu file 03
*/

#include "../include/flo.h"

void	change_opt_stat(data_t *d)
{
	if (sfKeyboard_isKeyPressed(sfKeyDown) && d->opt_stat < 6) {
		d->opt_stat = d->opt_stat + 1;
		while (sfKeyboard_isKeyPressed(sfKeyDown)) {
		}
	}
	if (sfKeyboard_isKeyPressed(sfKeyUp) && d->opt_stat > 0) {
		d->opt_stat = d->opt_stat - 1;
		while (sfKeyboard_isKeyPressed(sfKeyUp)) {
		}
	}
	if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
		d->opt_stat = 0;
		while (sfKeyboard_isKeyPressed(sfKeyLeft)) {
		}
	}
	if (sfKeyboard_isKeyPressed(sfKeyRight)) {
		d->opt_stat = 2;
		while (sfKeyboard_isKeyPressed(sfKeyRight)) {
		}
	}
}

void	check_sound_stats2(data_t *d)
{
	if (d->sound_stat == 2) {
		d->rect_sound.left = 260;
		sfMusic_setVolume(d->mus_ambiance1, 20);
		sfMusic_setVolume(d->mus_attacked, 20);
		sfMusic_setVolume(d->mus_combat1, 20);
		sfMusic_setVolume(d->mus_alert, 20);
	}
	if (d->sound_stat == 3) {
		d->rect_sound.left = 390;
		sfMusic_setVolume(d->mus_ambiance1, 0);
		sfMusic_setVolume(d->mus_ambiance2, 0);
		sfMusic_setVolume(d->mus_attacked, 0);
		sfMusic_setVolume(d->mus_combat1, 0);
		sfMusic_setVolume(d->mus_alert, 0);
	}
}

void	check_sound_stat(data_t *d)
{
	if (d->sound_stat == 0) {
		d->rect_sound.left = 0;
		sfMusic_setVolume(d->mus_ambiance1, 100);
		sfMusic_setVolume(d->mus_ambiance2, 100);
		sfMusic_setVolume(d->mus_attacked, 100);
		sfMusic_setVolume(d->mus_combat1, 100);
		sfMusic_setVolume(d->mus_alert, 100);
	}
	if (d->sound_stat == 1) {
		d->rect_sound.left = 130;
		sfMusic_setVolume(d->mus_ambiance1, 50);
		sfMusic_setVolume(d->mus_ambiance2, 50);
		sfMusic_setVolume(d->mus_attacked, 50);
		sfMusic_setVolume(d->mus_combat1, 50);
		sfMusic_setVolume(d->mus_alert, 50);
	}
	check_sound_stats2(d);
}

void	fct_sound(data_t *d)
{
	if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
		d->sound_stat++;
		if (d->sound_stat == 4)
			d->sound_stat = 0;
		check_sound_stat(d);
		while (1)
			if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfFalse)
				break;
	}
}
