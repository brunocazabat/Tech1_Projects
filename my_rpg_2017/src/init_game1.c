/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** initialisation of the game sprites and window
*/

#include "../include/flo.h"

sfSprite	*create_sprite(sfSprite *sprite, sfTexture *texture, char *PATH, sfVector2f pos)
{
	texture = sfTexture_createFromFile(PATH, NULL);
	sprite = sfSprite_create();
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

void	set_tex_rpg(data_t *d)
{
	sfRenderWindow_setVerticalSyncEnabled(d->winrpg, sfTrue);
	d->clock = sfClock_create();
	d->clock2 = sfClock_create();
	d->cspr = create_sprite(d->cspr, d->ctex, "Sprite/Sprite_sheet_char6.png", d->cpos);
	d->spr_space = create_sprite(d->spr_space, d->tex_space, "Sprite/space.jpg", d->pos_space);
	d->spr_menu_pause = create_sprite(d->spr_menu_pause, d->tex_menu_pause, "Sprite/Menu_pause2.png", d->pos_default);
	d->spr_res1 = create_sprite(d->spr_res1, d->tex_res1, "Sprite/Text/Resume_text.png", d->pos_res);
	d->spr_opt1 = create_sprite(d->spr_opt1, d->tex_opt1, "Sprite/Text/Option_text1.png", d->pos_opt);
	d->spr_quit1 = create_sprite(d->spr_quit1, d->tex_quit1, "Sprite/Text/Quit_text1.png", d->pos_quit);
	d->spr_back1 = create_sprite(d->spr_back1, d->tex_back1, "Sprite/Text/Back_text1.png", d->pos_back);
	d->spr_sound1 = create_sprite(d->spr_sound1, d->tex_sound1, "Sprite/Text/Sound_text1.png", d->pos_sound);
	d->spr_keyb = create_sprite(d->spr_keyb, d->tex_keyb, "Sprite/Select_keybiding.png", d->pos_keyb);
	d->spr_map = create_sprite(d->spr_map, d->tex_map, "Sprite/map_rpg.png", d->pos_map);
	d->spr_combatbg = create_sprite(d->spr_combatbg, d->tex_combatbg, "Sprite/combatbg.png", d->pos_default);
	d->spr_textbox = create_sprite(d->spr_textbox, d->tex_textbox, "Sprite/textbox.png", d->pos_textbox);
	d->spr_sound = create_sprite(d->spr_sound, d->tex_sound, "Sprite/Sound_status.png", d->pos_sound_stat);
	d->spr_combbox1 = create_sprite(d->spr_combbox1, d->tex_combbox, "Sprite/combatbox.png", d->pos_textbox);
	d->spr_attack1 = create_sprite(d->spr_attack1, d->tex_attack1, "Sprite/Text/Attack_text1.png", d->pos_attack);
	d->spr_skills1 = create_sprite(d->spr_skills1, d->tex_skills1, "Sprite/Text/Skills_text1.png", d->pos_skills);
	d->spr_object1 = create_sprite(d->spr_object1, d->tex_object1, "Sprite/Text/Object_text1.png", d->pos_object);
	d->spr_flee1 = create_sprite(d->spr_flee1, d->tex_flee1, "Sprite/Text/Flee_text1.png", d->pos_flee);
	d->spr_enemy1 = create_sprite(d->spr_enemy1, d->tex_enemy1, "Sprite/enemy_sprite1.png", d->pos_enemy);
	d->spr_HB_fg = create_sprite(d->spr_HB_fg, d->tex_HB_fg, "Sprite/HB_fg.png", d->pos_HB);
	d->spr_HB_red = create_sprite(d->spr_HB_red, d->tex_HB_red, "Sprite/HB_red.png", d->pos_HB);
	d->spr_E_HB_fg = create_sprite(d->spr_E_HB_fg, d->tex_E_HB_fg, "Sprite/E_HB_fg.png", d->pos_E_HB);
	d->spr_E_HB_red = create_sprite(d->spr_E_HB_red, d->tex_E_HB_red, "Sprite/E_HB_red.png", d->pos_E_HB_red);
	d->spr_inventory = create_sprite(d->spr_inventory, d->tex_inventory, "Sprite/Inventory_HUD.png", d->pos_inventory);
	d->spr_stats = create_sprite(d->spr_stats, d->tex_stats, "Sprite/Text/Stats_text.png", d->pos_stats);
	d->spr_bag = create_sprite(d->spr_bag, d->tex_bag, "Sprite/Text/Bag_text.png", d->pos_bag);
	d->spr_exit = create_sprite(d->spr_exit, d->tex_exit, "Sprite/Text/Exit_text.png", d->pos_exit);
	d->tex_map_col = sfTexture_createFromFile("Sprite/map_collision5.png", NULL);
	d->font = sfFont_createFromFile("Sprite/Font_dialog.ttf");
	d->font2 = sfFont_createFromFile("Sprite/Superstar.ttf");
	d->spr_map_col = sfSprite_create();
	d->image = sfImage_create(1600, 1600);
	d->text_Left = sfText_create();
	d->text_Right = sfText_create();
	d->text_Up = sfText_create();
	d->text_Down = sfText_create();
	d->text_textbox = sfText_create();
	d->text_stats = sfText_create();
	d->text_mylvl = sfText_create();
	d->text_enlvl = sfText_create();
}

void	set_spr_rpg(data_t *d)
{
	sfSprite_setTexture(d->spr_map_col, d->tex_map_col, sfTrue);
	d->image = sfTexture_copyToImage(d->tex_map_col);
	sfSprite_setPosition(d->spr_map_col, d->pos_map);
	sfSprite_setPosition(d->cspr, d->cpos);
	sfText_setPosition(d->text_Left, d->pos_text_Left);
	sfText_setPosition(d->text_Right, d->pos_text_Right);
	sfText_setPosition(d->text_Up, d->pos_text_Up);
	sfText_setPosition(d->text_Down, d->pos_text_Down);
	sfText_setPosition(d->text_textbox, d->pos_text_textbox);
	sfText_setPosition(d->text_stats, d->pos_text_stats);
	sfText_setPosition(d->text_mylvl, d->pos_mylvl);
	sfText_setPosition(d->text_enlvl, d->pos_enlvl);
	sfSprite_setScale(d->cspr, d->scalex1v5);
	sfSprite_setScale(d->spr_map, d->scalex2);
	sfSprite_setScale(d->spr_map_col, d->scalex2);
	sfSprite_setScale(d->spr_enemy1, d->scalex5);
	sfText_setFont(d->text_Left, d->font2);
	sfText_setFont(d->text_Right, d->font2);
	sfText_setFont(d->text_Up, d->font2);
	sfText_setFont(d->text_Down, d->font2);
	sfText_setFont(d->text_textbox, d->font);
	sfText_setFont(d->text_stats, d->font);
	sfText_setFont(d->text_mylvl, d->font);
	sfText_setFont(d->text_enlvl, d->font);
	sfText_setCharacterSize(d->text_Left, 40);
	sfText_setCharacterSize(d->text_Right, 40);
	sfText_setCharacterSize(d->text_Up, 40);
	sfText_setCharacterSize(d->text_Down, 40);
	sfText_setCharacterSize(d->text_textbox, 30);
	sfText_setCharacterSize(d->text_stats, 45);
	sfText_setCharacterSize(d->text_mylvl, 30);
	sfText_setCharacterSize(d->text_enlvl, 30);
}
