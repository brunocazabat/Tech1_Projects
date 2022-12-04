/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** main_game window
*/

#include "../include/flo.h"

void	close_game(data_t *d)
{
	sfRenderWindow_close(d->winrpg);
	sfMusic_destroy(d->mus_ambiance1);
	sfMusic_destroy(d->mus_ambiance2);
	sfMusic_destroy(d->mus_combat1);
	sfMusic_destroy(d->mus_attacked);
	sfMusic_destroy(d->mus_alert);
	exit(0);
}

void	eventclose(data_t *d)
{
	while (sfRenderWindow_pollEvent(d->winrpg, &d->eventrpg))
		if (d->eventrpg.type == sfEvtClosed) {
			sfRenderWindow_close(d->winrpg);
			sfMusic_destroy(d->mus_ambiance1);
			sfMusic_destroy(d->mus_ambiance2);
			sfMusic_destroy(d->mus_combat1);
			sfMusic_destroy(d->mus_attacked);
			sfMusic_destroy(d->mus_alert);
			exit(0);
		}
}
