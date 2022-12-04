/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** init game part 2
*/

#include "../include/flo.h"

void	update_player_stat(data_t *d)
{
	if (d->xp > d->max_xp) {
		d->xp = d->xp - d->max_xp;
		d->my_lvl++;
		dialog(d, "_lvlup");
	}
	d->max_xp = 0;
	d->my_hp = 0;
	d->my_atk = 0;
	d->my_def = 0;
	d->max_xp = 25 + d->my_lvl * 25;
	d->my_hp = 2 + 8 * d->my_lvl;
	d->my_atk = 10 + 2 * d->my_lvl;
	d->my_def = 5 + d->my_lvl;
}

void	fct_map(data_t *d)
{
	d->time = sfClock_getElapsedTime(d->clock);
	d->seconds = d->time.microseconds / 1000000.0;
	sfRenderWindow_clear(d->winrpg, sfBlack);
	sfSprite_setPosition(d->spr_map, d->pos_map);
	sfSprite_setPosition(d->spr_space, d->pos_space);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_space, NULL);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_map, NULL);
}

void	looprpg(data_t *d)
{
	fct_map(d);
	sprite_mov(d);
	pause_menu(d);
	combat(d);
	inventory_check(d);
	update_player_stat(d);
	scenario(d);
	sfRenderWindow_display(d->winrpg);
}

void	set_music(data_t *d)
{
	d->mus_ambiance1 = sfMusic_createFromFile("Audio/Ambiance1.ogg");
	sfMusic_setLoop(d->mus_ambiance1, sfTrue);
	sfMusic_play(d->mus_ambiance1);
	d->mus_combat1 = sfMusic_createFromFile("Audio/Combat1.ogg");
	sfMusic_setLoop(d->mus_combat1, sfTrue);
	d->mus_ambiance2 = sfMusic_createFromFile("Audio/Ambiance2.ogg");
	sfMusic_setLoop(d->mus_ambiance2, sfTrue);
	d->mus_attacked = sfMusic_createFromFile("Audio/Attacked.ogg");
	sfMusic_setLoop(d->mus_attacked, sfTrue);
	d->mus_alert = sfMusic_createFromFile("Audio/Alert_sound.ogg");
	sfMusic_setLoop(d->mus_alert, sfTrue);
}

void	rpg_main_win(void)
{
	sfVideoMode mode = {1920, 1080, 32};
	data_t d;

	set_var(&d);
	d.winrpg = sfRenderWindow_create(mode, "OVERCAST", sfResize | sfClose, NULL);
	set_tex_rpg(&d);
	set_spr_rpg(&d);
	set_music(&d);
	sfRenderWindow_setFramerateLimit(d.winrpg, 60);
	srand(getpid());
	while (sfRenderWindow_isOpen(d.winrpg)) {
		eventclose(&d);
		looprpg(&d);
	}
	sfRenderWindow_destroy(d.winrpg);
}
