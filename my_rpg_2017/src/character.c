/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** manage character
*/

#include "../include/flo.h"

void	move_rect(sfIntRect *rect, int offset, int max_value)
{
	if (rect->left != max_value)
		rect->left = rect->left + offset;
	else
		rect->left = 0;
}

void	anim_spr(data_t *d)
{
	if (d->seconds > 0.15) {
		move_rect(&d->crect, 32, 96);
		sfClock_restart(d->clock);
	}
}



void	fct_collision(data_t *d)
{
	d->colorTL1 = sfImage_getPixel(d->image, (-d->pos_map.x + 965) / 6, (-d->pos_map.y + 577+30) / 6);
	d->colorTL2 = sfImage_getPixel(d->image, (-d->pos_map.x + 970) / 6, (-d->pos_map.y + 572+30) / 6);
	d->colorTR1 = sfImage_getPixel(d->image, (-d->pos_map.x + 1053) / 6, (-d->pos_map.y + 577+30) / 6);
	d->colorTR2 = sfImage_getPixel(d->image, (-d->pos_map.x + 1038) / 6, (-d->pos_map.y + 572+30) / 6);
	d->colorDL1 = sfImage_getPixel(d->image, (-d->pos_map.x + 965) / 6, (-d->pos_map.y + 586+48) / 6);
	d->colorDL2 = sfImage_getPixel(d->image, (-d->pos_map.x + 970) / 6, (-d->pos_map.y + 591+48) / 6);
	d->colorDR1 = sfImage_getPixel(d->image, (-d->pos_map.x + 1053) / 6, (-d->pos_map.y + 586+48) / 6);
	d->colorDR2 = sfImage_getPixel(d->image, (-d->pos_map.x + 1038) / 6, (-d->pos_map.y + 591+48) / 6);
	d->colorDM = sfImage_getPixel(d->image, (-d->pos_map.x + 1000) / 6, (-d->pos_map.y + 591+48) / 6);
	d->colorTM = sfImage_getPixel(d->image, (-d->pos_map.x + 1000) / 6, (-d->pos_map.y + 577+30) / 6);
}

void	fct_movement(data_t *d)
{
	if (d->aggro <= 0 && d->hist_stat >= 8) {
		d->aggro = (rand() % 201) + 200;
		d->combat_stat = 42;
	}
	if (sfKeyboard_isKeyPressed(d->K_Down)) {
		d->crect.top = 0;
		if (d->colorDL2.a != 0 && d->colorDR2.a != 0 && d->colorDM.a != 0) {
			anim_spr(d);
			d->pos_map.y = d->pos_map.y - 5;
			d->pos_space.y = d->pos_space.y - 2;
			d->aggro -= 1;
		}
	} else if (sfKeyboard_isKeyPressed(d->K_Left)) {
		d->crect.top = 32;
		if (d->colorTL1.a != 0 && d->colorDL1.a != 0) {
			anim_spr(d);
			d->pos_map.x = d->pos_map.x + 5;
			d->pos_space.x = d->pos_space.x + 2;
			d->aggro -= 1;
		}
	} else if (sfKeyboard_isKeyPressed(d->K_Right)) {
		d->crect.top = 64;
		if (d->colorTR1.a != 0 && d->colorDR1.a != 0) {
			anim_spr(d);
			d->pos_map.x = d->pos_map.x - 5;
			d->pos_space.x = d->pos_space.x - 2;
			d->aggro -= 1;
		}
	} else if (sfKeyboard_isKeyPressed(d->K_Up)) {
		d->crect.top = 96;
		if (d->colorTL2.a != 0 && d->colorTR2.a != 0 && d->colorTM.a != 0) {
			anim_spr(d);
			d->pos_map.y = d->pos_map.y + 5;
			d->pos_space.y = d->pos_space.y + 2;
			d->aggro -= 1;
		}
	} else
		d->crect.left = 32;
}

void	sprite_mov(data_t *d)
{
	sfSprite_setTextureRect(d->cspr, d->crect);
	sfRenderWindow_drawSprite(d->winrpg, d->cspr, NULL);
	fct_collision(d);
	fct_movement(d);
}
