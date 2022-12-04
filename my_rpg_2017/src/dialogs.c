/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** manage dialogs and scenario
*/

#include "../include/flo.h"

void	black_dialog(data_t *d, char *num_dialog)
{
	while (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue) {
	}
	sfRenderWindow_clear(d->winrpg, sfBlack);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_textbox, NULL);
	sfText_setString(d->text_textbox, get_dialogue(my_strcat("dialogue/dialogue", num_dialog)));
	sfRenderWindow_drawText(d->winrpg, d->text_textbox, NULL);
	sfRenderWindow_display(d->winrpg);
	while (1) {
		if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue)
			break;
	}
}

void	dialog(data_t *d, char *num_dialog)
{
	while (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue) {
	}
	sfRenderWindow_clear(d->winrpg, sfBlack);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_space, NULL);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_map, NULL);
	sfRenderWindow_drawSprite(d->winrpg, d->cspr, NULL);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_textbox, NULL);
	sfText_setString(d->text_textbox, get_dialogue(my_strcat("dialogue/dialogue", num_dialog)));
	sfRenderWindow_drawText(d->winrpg, d->text_textbox, NULL);
	sfRenderWindow_display(d->winrpg);
	while (1) {
		if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue)
			break;
	}
}

void	travel_mov(data_t *d)
{
	if (d->hist_stat == 7) {
		d->crect.top = 96;
		d->pos_map.y += 10;
	}
	if (d->hist_stat == 8) {
		d->crect.top = 64;
		d->pos_map.x -= 10;
	}
	if (d->pos_map.y > -3990)
		d->hist_stat = 8;
	if (d->pos_map.x < -4500)
		d->hist_stat = 9;
}

void	anim_travel(data_t *d)
{
	d->ctex = sfTexture_createFromFile("Sprite/Sprite_Vaisseau.png", NULL);
	sfSprite_setTexture(d->cspr, d->ctex, sfTrue);
	d->aggro = 200;
	while(d->hist_stat != 9) {
		fct_map(d);
		pause_menu(d);
		inventory_check(d);
		update_player_stat(d);
		anim_spr(d);
		sfSprite_setTextureRect(d->cspr, d->crect);
		sfRenderWindow_drawSprite(d->winrpg, d->cspr, NULL);
		travel_mov(d);
		if (sfKeyboard_isKeyPressed(sfKeySpace))
			while(1)
				if(sfKeyboard_isKeyPressed(sfKeySpace)) {
					d->pos_map.x = -4500;
					d->pos_map.y = -3990;
					break;
				}
		sfRenderWindow_display(d->winrpg);
	}
	d->ctex = sfTexture_createFromFile("Sprite/Sprite_sheet_char6.png", NULL);
	sfSprite_setTexture(d->cspr, d->ctex, sfTrue);
}

void	update_map_lvl(data_t *d)
{
	if (d->pos_map.x < -4400 && d->pos_map.y < -3700 && d->pos_map.y > -5000) {
		d->map_lvl = 0;
	} else if (d->pos_map.x < -4800 && d->pos_map.x > -6600 && d->pos_map.y < -3260 && d->pos_map.y > -3655) {
		d->map_lvl = 1;
	} else if (d->pos_map.x < -2000 && d->pos_map.x > -4000 && d->pos_map.y < -3300 && d->pos_map.y > -5100) {
		d->map_lvl = 2;
	} else if (d->pos_map.x < -3900 && d->pos_map.x > -6600 && d->pos_map.y < -1450 && d->pos_map.y > -3200) {
		d->map_lvl = 3;
	}
}

void	scenario(data_t *d)
{
	update_map_lvl(d);
	if (d->hist_stat == 0) {
		sfMusic_pause(d->mus_ambiance1);
		black_dialog(d, "1");
		dialog(d, "2");
		dialog(d, "3");
		dialog(d, "4");
		dialog(d, "5");
		dialog(d, "6");
		dialog(d, "7");
		dialog(d, "8");
		d->hist_stat = 1;
		sfMusic_play(d->mus_ambiance1);
	} else if (d->hist_stat == 5 && d->pos_map.y > -7500) {
		dialog(d, "_enemy1");
		dialog(d, "_enemy2");
		dialog(d, "_enemy3");
		d->combat_stat = 42;
		combat(d);
		if (d->combat_stat == 61) {
			d->hist_stat = 7;
			sfSleep(d->delay);
			dialog(d, "_omw1");
		} else {
			dialog(d, "_enemy4");
			d->pos_map.y = -7530;
			d->hist_stat = 6;
		}
	
	} else if (d->hist_stat == 6 && d->pos_map.y > -7500) {
		d->combat_stat = 42;
		combat(d);
		if (d->combat_stat == 61) {
			d->hist_stat = 7;
			sfSleep(d->delay);
			dialog(d, "_omw1");
		} else {
			dialog(d, "_enemy4");
			d->pos_map.y = -7530;
		}
	} else if (d->hist_stat == 11 && d->pos_map.x == -4015
		&& d->pos_map.y <= -3335 && d->pos_map.y >= -3495) {
		dialog(d, "_side1");
		d->hist_stat = 12;
		d->second = 1;
	} else if (d->second == 6) {
		dialog(d, "_side2");
		d->xp += 25;
		d->second += 1;
	}
	if (sfKeyboard_isKeyPressed(sfKeyE)) {
		if (d->hist_stat == 1 && d->pos_map.x < -6541 && d->pos_map.x > -6651
		&& d->pos_map.y < -7550 && d->pos_map.y > -7680) {
			dialog(d, "_bob1");
			dialog(d, "_bob2");
			dialog(d, "_bob3");
			d->hist_stat = 2;
		} else if (d->hist_stat == 1) {
			dialog(d, "_r1");
		} else if (d->hist_stat == 2 && d->pos_map.x < -6721 && d->pos_map.x > -6776
			&& d->pos_map.y < -7680 && d->pos_map.y > -7730) {
			dialog(d, "9");
		} else if (d->hist_stat == 2 && d->pos_map.x < -6685 && d->pos_map.x > -6720
			&& d->pos_map.y < -8090 && d->pos_map.y > -8170) {
			dialog(d, "10");
			dialog(d, "11");
			dialog(d, "12");
			d->hist_stat = 3;
			sfMusic_stop(d->mus_ambiance1);
			sfMusic_play(d->mus_attacked);
		} else if (d->hist_stat == 2) {
			dialog(d, "_r2");
		} else if (d->hist_stat == 3 && d->pos_map.x < -6541 && d->pos_map.x > -6651
			&& d->pos_map.y < -7550 && d->pos_map.y > -7680) {
			dialog(d, "_bob4");
			dialog(d, "_bob5");
			dialog(d, "_bob6");
			d->hist_stat = 4;
		} else if (d->hist_stat == 3) {
			dialog(d, "_r3");
		} else if (d->hist_stat == 4 && d->pos_map.x < -6300 && d->pos_map.x > -6420
			&& d->pos_map.y < -8110 && d->pos_map.y > -8240) {
			dialog(d, "13");
			sfMusic_stop(d->mus_attacked);
			sfMusic_play(d->mus_alert);
			dialog(d, "14");
			dialog(d, "_atk1");
			dialog(d, "_atk2");
			black_dialog(d, "_atk3");
			sfMusic_stop(d->mus_alert);
			sfMusic_play(d->mus_ambiance2);
			sfSleep(sfSeconds(1.5));
			d->pos_map.x = d->pos_map.x + 456 *6;
			fct_map(d);
			sfRenderWindow_drawSprite(d->winrpg, d->cspr, NULL);
			sfRenderWindow_display(d->winrpg);
			black_dialog(d, "_atk4");
			dialog(d, "14");
			dialog(d, "_atk5");
			dialog(d, "_atk6");
			dialog(d, "_atk7");
			dialog(d, "_atk8");
			d->hist_stat = 5;
		} else if (d->hist_stat == 4) {
			dialog(d, "_r4");
		} else if (d->hist_stat == 7 && d->pos_map.y > -6945) {
			dialog(d, "_omw2");
			anim_travel(d);
			d->hist_stat = 8;
		} else if (d->hist_stat >= 5 && d->hist_stat <= 7) {
			dialog(d, "_r5");
		} else if (d->hist_stat == 8 && d->pos_map.x <= -5890 && d->pos_map.x >= -5975
			&& d->pos_map.y <= -4010 && d->pos_map.y >= -4040) {
			dialog(d, "_raid1");
			dialog(d, "_raid2");
			dialog(d, "_raid3");
			d->hist_stat = 9;
			d->xp += 15;
		} else if (d->hist_stat == 8) {
			dialog(d, "_r8");
		} else if (d->hist_stat == 9 && d->pos_map.y <= -3425 && d->pos_map.y >= -3460
			&& d->pos_map.x <= -6345 && d->pos_map.x >= -6385) {
			dialog(d, "_raid5");
			d->ctex = sfTexture_createFromFile("Sprite/Sprite_sheet_char8.png", NULL);
			sfSprite_setTexture(d->cspr, d->ctex, sfTrue);
			d->hist_stat = 10;
		} else if (d->hist_stat == 9 && d->pos_map.x <= -5520 && d->pos_map.x >= -6380
			&& d->pos_map.y <= -3425 && d->pos_map.y >= -3460) {
			dialog(d, "_raid4");
		} else if (d->hist_stat == 9) {
			dialog(d, "_r9");
		} else if (d->hist_stat == 10 && d->pos_map.x <= -5890 && d->pos_map.x >= -5975
			&& d->pos_map.y <= -4010 && d->pos_map.y >= -4040) {
			dialog(d, "_prison1");
			dialog(d, "_prison2");
			d->xp += 30;
			d->hist_stat = 11;
		} else if (d->hist_stat == 10) {
			dialog(d, "_r10");
		} else if (d->hist_stat == 11 || d->hist_stat == 12) {
			dialog(d, "_r11");
			dialog(d, "_r12");
		}
	}
}
