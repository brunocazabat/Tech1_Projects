/*
** EPITECH PROJECT, 2018
** others_functions2
** File description:
** my_rpg
*/

#include "../include/my.h"

void	drawsprite3(t_par *par)
{
	if (par->step == 2) {
		sfRenderWindow_drawSprite(par->window, par->sprite6, NULL);
		sfRenderWindow_drawSprite(par->window, par->sprite7, NULL);
		sfRenderWindow_drawSprite(par->window, par->sprite16, NULL);
		sfRenderWindow_drawSprite(par->window, par->sprite17, NULL);
	}
}
