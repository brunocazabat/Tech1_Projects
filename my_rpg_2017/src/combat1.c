/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** manage combat file 01
*/

#include "../include/flo.h"

int	random_int(void)
{
	int c;

	c = rand() % 101;
	if (c == 0)
		c += 1;
	return (c);
}

void	Print_inBox(data_t *d, char *str)
{
	sfText_setString(d->text_textbox, str);
	sfRenderWindow_drawText(d->winrpg, d->text_textbox, NULL);
}

char	*set_str_lvl(int hp, int lvl)
{
	char *str;

	str = my_strcat("HP : ", my_itoa(hp));
	str = my_strcat(str, my_strcat("\n\nLVL : ", my_itoa(lvl)));
	return(str);
}

void	health_bar(data_t *d)
{
	d->rect_E_HB.left = 534 - 534 * (d->enemy_hp * 100 / (10 * d->enemy_lvl)) / 75;
	d->pos_E_HB_red.x = d->pos_E_HB.x + d->rect_E_HB.left;
	sfSprite_setPosition(d->spr_E_HB_red, d->pos_E_HB_red);
	d->rect_HB.width = 534 * (d->my_hp * 100 / (2 + 8 * d->my_lvl)) / 100 + 23;
	sfSprite_setTextureRect(d->spr_HB_red, d->rect_HB);
	sfSprite_setTextureRect(d->spr_E_HB_red, d->rect_E_HB);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_HB_red, NULL);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_HB_fg, NULL);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_E_HB_red, NULL);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_E_HB_fg, NULL);
	sfText_setString(d->text_mylvl, set_str_lvl(d->my_hp, d->my_lvl));
	sfText_setString(d->text_enlvl, set_str_lvl(d->enemy_hp, d->enemy_lvl));
	sfRenderWindow_drawText(d->winrpg, d->text_mylvl, NULL);
	sfRenderWindow_drawText(d->winrpg, d->text_enlvl, NULL);
}

void	draw_spr_comb(data_t *d)
{
	if (d->turn > 1)
		d->tex_combbox = sfTexture_createFromFile("Sprite/textbox.png", NULL);
	if (d->turn == 1)
		d->tex_combbox = sfTexture_createFromFile("Sprite/combatbox.png", NULL);
	sfSprite_setTexture(d->spr_combbox1, d->tex_combbox, sfTrue);
	sfRenderWindow_clear(d->winrpg, sfBlack);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_combatbg, NULL);
	sfRenderWindow_drawSprite(d->winrpg, d->cspr, NULL);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_combbox1, NULL);
	sfRenderWindow_drawSprite(d->winrpg, d->spr_enemy1, NULL);
	health_bar(d);
}

void	fct_attack(data_t *d)
{
	if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
		d->turn = 3;
		draw_spr_comb(d);
		if (d->my_atk - d->enemy_def > 0) {
			Print_inBox(d, "You used basic attack !");
			d->enemy_hp = d->enemy_hp - d->my_atk + d->enemy_def;
		} else
			Print_inBox(d, "You failed your attack");
		sfRenderWindow_display(d->winrpg);
		sfSleep(d->delay);
		sfSleep(d->delay);
		while (1)
			if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfFalse) {
				d->turn = 2;
				break;
			}
	}
}

void	fct_skills(data_t *d)
{
	if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
		d->turn = 3;
		d->my_hp = d->my_hp + ((2 + 8 * d->my_lvl) - d->my_hp);
		draw_spr_comb(d);
		Print_inBox(d, "You used your skill");
		sfRenderWindow_display(d->winrpg);
		sfSleep(d->delay);
		sfSleep(d->delay);
		draw_spr_comb(d);
		Print_inBox(d, "Regained all hp");
		sfRenderWindow_display(d->winrpg);
		sfSleep(d->delay);
		sfSleep(d->delay);
		while (1)
			if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfFalse) {
				d->turn = 2;
				break;
			}
	}
}

void	fct_flee(data_t *d)
{
	int a;

	if (sfKeyboard_isKeyPressed(sfKeyReturn)) {
		a = random_int();
		if (a < 101) {
			sfMusic_stop(d->mus_combat1);
			sfMusic_play(d->mus_ambiance1);
			set_spr_rpg(d);
			d->combat_stat = 60;
		}
		while (1)
			if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfFalse) {
				d->turn = 2;
				break;
			}
	}
}

void	comb_layer_status(data_t *d)
{
	if (d->combat_stat == 0) {
		sfRenderWindow_drawSprite(d->winrpg, d->spr_attack1, NULL);
		fct_attack(d);
	} else if (d->combat_stat == 1) {
		sfRenderWindow_drawSprite(d->winrpg, d->spr_skills1, NULL);
		fct_skills(d);
	} else if (d->combat_stat == 2) {
		sfRenderWindow_drawSprite(d->winrpg, d->spr_object1, NULL);
	} else if (d->combat_stat == 3) {
		sfRenderWindow_drawSprite(d->winrpg, d->spr_flee1, NULL);
		fct_flee(d);
	}
}

void	change_comb_stat(data_t *d)
{
	if (sfKeyboard_isKeyPressed(sfKeyRight) && d->combat_stat < 3) {
		d->combat_stat = d->combat_stat + 1;
		while (sfKeyboard_isKeyPressed(sfKeyRight)) {
		}
	}
	if (sfKeyboard_isKeyPressed(sfKeyLeft) && d->combat_stat > 0) {
		d->combat_stat = d->combat_stat - 1;
		while (sfKeyboard_isKeyPressed(sfKeyLeft)) {
		}
	}
}

void	anim_basic_atk(data_t *d)
{
	sfSleep(d->delay);
	d->rect_enemy.left = 32;
	sfSprite_setTextureRect(d->spr_enemy1, d->rect_enemy);
	draw_spr_comb(d);
	Print_inBox(d, "The enemy use basic attack !");
	sfRenderWindow_display(d->winrpg);
	sfSleep(d->delay);
	d->rect_enemy.left = 64;
	sfSprite_setTextureRect(d->spr_enemy1, d->rect_enemy);
	draw_spr_comb(d);
	Print_inBox(d, "The enemy use basic attack !");
	sfRenderWindow_display(d->winrpg);
	sfSleep(d->delay);
	d->rect_enemy.left = 0;
	sfSprite_setTextureRect(d->spr_enemy1, d->rect_enemy);
	draw_spr_comb(d);
	sfRenderWindow_display(d->winrpg);
}

void	anim_skills(data_t *d)
{
	sfSleep(d->delay);
	d->rect_enemy.left = 32;
	sfSprite_setTextureRect(d->spr_enemy1, d->rect_enemy);
	draw_spr_comb(d);
	Print_inBox(d, "The enemy use Overcharged Shot !");
	sfRenderWindow_display(d->winrpg);
	sfSleep(d->delay);
	d->rect_enemy.left = 96;
	sfSprite_setTextureRect(d->spr_enemy1, d->rect_enemy);
	draw_spr_comb(d);
	Print_inBox(d, "The enemy use Overcharged Shot !");
	sfRenderWindow_display(d->winrpg);
	sfSleep(d->delay);
	d->rect_enemy.left = 0;
	sfSprite_setTextureRect(d->spr_enemy1, d->rect_enemy);
	draw_spr_comb(d);
	sfRenderWindow_display(d->winrpg);
}

void	enemy_turn(data_t *d)
{
	int a;

	a = random_int() % 101;
	if (a < 81) {
		draw_spr_comb(d);
		Print_inBox(d, "The enemy use basic attack !");
		sfRenderWindow_display(d->winrpg);
		anim_basic_atk(d);
		if (d->enemy_atk - d->my_def <= 0) {
		} else {
			d->my_hp = d->my_hp - d->enemy_atk + d->my_def;
		}
	} else {
		Print_inBox(d, "The enemy use Overcharged Shot !");
		anim_skills(d);
		d->my_hp = d->my_hp - d->enemy_atk + (d->my_def / 2);
	}
	d->turn = 1;
}

void	loopcombat(data_t *d)
{
	d->time2 = sfClock_getElapsedTime(d->clock2);
	draw_spr_comb(d);
	change_comb_stat(d);
	pause_menu(d);
	if (d->turn == 1)
		comb_layer_status(d);
	else if (d->turn == 2)
		enemy_turn(d);
	sfRenderWindow_display(d->winrpg);
}

void	set_enemy_stat(data_t *d)
{
	d->enemy_lvl = d->map_lvl + random_int() % 3;
	if (d->hist_stat == 5 || d->hist_stat == 6)
		d->enemy_lvl = 1;
	d->enemy_hp = 0;
	d->enemy_atk = 0;
	d->enemy_def = 0;
	d->enemy_hp = 7 * d->enemy_lvl;
	d->enemy_atk = 8 + 2 * d->enemy_lvl;
	d->enemy_def = 5 + d->enemy_lvl;
}

void	init_comb_var(data_t *d)
{
	d->crect.left = 32;
	d->crect.top = 64;
	d->crect.width = 32;
	d->crect.height = 32;
	d->combat_stat = 0;
	d->rect_enemy.left = 0;
	d->rect_enemy.top = 0;
	d->rect_enemy.width = 32;
	d->rect_enemy.height = 32;
	d->turn = 1;
	set_enemy_stat(d);
}

void	if_won(data_t *d)
{
	if (d->enemy_hp <= 0) {
		sfMusic_stop(d->mus_combat1);
		sfMusic_play(d->mus_ambiance2);
		d->xp = d->xp + d->enemy_lvl * 10;
		if (d->my_lvl <= d->enemy_lvl)
			d->xp = d->xp + (d->enemy_lvl - d->my_lvl + 1) * 5 * d->my_lvl;
		set_spr_rpg(d);
		d->combat_stat = 61;
		if (d->second >= 1)
			d->second += 1;
	}
}

void	if_lost(data_t *d)
{
	if (d->my_hp <= 0) {
		sfMusic_stop(d->mus_combat1);
		sfMusic_play(d->mus_ambiance2);
		d->xp = d->xp + d->enemy_lvl * 1;
		set_spr_rpg(d);
		d->combat_stat = 60;
	}
}

void	combat(data_t *d)
{
	if (d->combat_stat == 42 && d->map_lvl > 0)
	{
		sfClock_restart(d->clock2);
		sfMusic_pause(d->mus_ambiance1);
		sfMusic_pause(d->mus_ambiance2);
		sfMusic_play(d->mus_combat1);
		init_comb_var(d);
		sfSprite_setTextureRect(d->cspr, d->crect);
		sfSprite_setTextureRect(d->spr_enemy1, d->rect_enemy);
		sfSprite_setPosition(d->cspr, d->cpos_combat);
		sfSprite_setScale(d->cspr, d->scalex5);
		sfSleep(d->delay);
		while (d->combat_stat < 60) {
			eventclose(d);
			loopcombat(d);
			if_won(d);
			if_lost(d);
		}
	}
}
