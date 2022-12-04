/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** set variables
*/

#include "../include/flo.h"

void	set_var(data_t *d)
{
	d->second = 0;
	d->aggro = 150;
	d->sound_stat = 0;
	d->hist_stat = 0;
	d->inv_stat = 0;
	d->cpos.x = 960;
	d->cpos.y = 540;
	d->pos_space.x = -1800;
	d->pos_space.y = -1300;
	d->cpos_combat.x = 300;
	d->cpos_combat.y = 540;
	d->crect.left = 0;
	d->crect.top = 0;
	d->crect.width = 32;
	d->crect.height = 32;
	d->rect_sound.left = 0;
	d->rect_sound.top = 0;
	d->rect_sound.width = 130;
	d->rect_sound.height = 100;
	d->rect_enemy.left = 0;
	d->rect_enemy.top = 0;
	d->rect_enemy.width = 32;
	d->rect_enemy.height = 32;
	d->rect_HB.left = 0;
	d->rect_HB.top = 0;
	d->rect_HB.width = 534;
	d->rect_HB.height = 68;
	d->rect_E_HB.left = 0;
	d->rect_E_HB.top = 0;
	d->rect_E_HB.width = 534;
	d->rect_E_HB.height = 100;
	d->scalex2.x = 6;
	d->scalex2.y = 6;
	d->scalex5.x = 5;
	d->scalex5.y = 5;
	d->scalex1v5.x = 3;
	d->scalex1v5.y = 3;
	d->pos_default.x = 0;
	d->pos_default.y = 0;
	d->pos_res.x = 94;
	d->pos_res.y = 297;
	d->pos_opt.x = 96;
	d->pos_opt.y = 446;
	d->pos_quit.x = 91;
	d->pos_quit.y = 589;
	d->pos_back.x = 93;
	d->pos_back.y = 71;
	d->pos_sound.x = 87;
	d->pos_sound.y = 382;
	d->pos_keyb.x = 1795;
	d->pos_keyb.y = 181;
	d->pos_map.x = -6241;
	d->pos_map.y = -8215;
	d->pos_text_Left.x = 1680;
	d->pos_text_Left.y = 210;
	d->pos_text_Right.x = 1680;
	d->pos_text_Right.y = 361;
	d->pos_text_Up.x = 1680;
	d->pos_text_Up.y = 503;
	d->pos_text_Down.x = 1680;
	d->pos_text_Down.y = 648;
	d->pos_textbox.x = 350;
	d->pos_textbox.y = 824;
	d->pos_sound_stat.x = 422;
	d->pos_sound_stat.y = 382;
	d->pos_text_textbox.x = 400;
	d->pos_text_textbox.y = 850;
	d->pos_attack.x = 350 + 26;
	d->pos_attack.y = 824 + 21;
	d->pos_skills.x = 350 + 361;;
	d->pos_skills.y = 824 + 21;
	d->pos_object.x = 350 + 666;
	d->pos_object.y = 824 + 21;
	d->pos_flee.x = 350 + 957;
	d->pos_flee.y = 824 + 21;
	d->pos_enemy.x = 1600;
	d->pos_enemy.y = 540;
	d->pos_HB.x = 25;
	d->pos_HB.y = 25;
	d->pos_E_HB.x = 1300;
	d->pos_E_HB.y = 25;
	d->pos_inventory.x = 0;
	d->pos_inventory.y = 0;
	d->pos_stats.x = 373;
	d->pos_stats.y = 132;
	d->pos_text_stats.x = 750;
	d->pos_text_stats.y = 132;
	d->pos_bag.x = 374;
	d->pos_bag.y = 228;
	d->pos_exit.x = 371;
	d->pos_exit.y = 321;
	d->pos_mylvl.x = 50;
	d->pos_mylvl.y = 50;
	d->pos_enlvl.x = 1700;
	d->pos_enlvl.y = 50;
	d->K_Left = sfKeyLeft;
	d->K_Right = sfKeyRight;
	d->K_Up = sfKeyUp;
	d->K_Down = sfKeyDown;
	d->delay = sfSeconds(0.5);
	d->combat_stat = 0;
	d->map_lvl = 1;
	d->xp = 1;
	d->my_lvl = 1;
}
