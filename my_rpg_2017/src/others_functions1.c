/*
** EPITECH PROJECT, 2017
** others_functions.c
** File description:
** my_rpg
*/

#include "../include/my.h"

void	set_text(t_par *par)
{
	sfSprite_setTexture(par->sprite1, par->texture1, sfTrue);
	sfSprite_setTexture(par->sprite2, par->texture2, sfTrue);
	sfSprite_setTexture(par->sprite3, par->texture3, sfTrue);
	sfSprite_setTexture(par->sprite4, par->texture4, sfTrue);
	sfSprite_setTexture(par->sprite5, par->texture5, sfTrue);
	sfSprite_setTexture(par->sprite6, par->texture6, sfTrue);
	sfSprite_setTexture(par->sprite7, par->texture7, sfTrue);
	sfSprite_setTexture(par->sprite8, par->texture8, sfTrue);
	sfSprite_setTexture(par->sprite9, par->texture9, sfTrue);
	sfSprite_setTexture(par->sprite10, par->texture10, sfTrue);
	sfSprite_setTexture(par->sprite11, par->texture11, sfTrue);
	sfSprite_setTexture(par->sprite12, par->texture3, sfTrue);
	sfSprite_setTexture(par->sprite13, par->texture12, sfTrue);
	sfSprite_setTexture(par->sprite14, par->texture13, sfTrue);
	sfSprite_setTexture(par->sprite15, par->texture14, sfTrue);
	sfSprite_setTexture(par->sprite16, par->texture15, sfTrue);
	sfSprite_setTexture(par->sprite17, par->texture16, sfTrue);
}

void	vect_init1(t_par *par)
{
	par->vect1.x = 0;
	par->vect1.y = 0;
	par->vect2.x = 870;
	par->vect2.y = 25;
	par->vect3.x = 1250;
	par->vect3.y = 240;
	par->vect4.x = 1250;
	par->vect4.y = 360;

	par->vect5.x = 50;
	par->vect5.y = 50;

	par->vect6.x = 40;
	par->vect6.y = 400;
	par->vect7.x = 750;
	par->vect7.y = 200;
	par->vect8.x = 1240;
	par->vect8.y = 200;
	par->vect9.x = 1000;
	par->vect9.y = 200;
}

void	vect_init2(t_par *par)
{
	par->vect8.x = 1240;
	par->vect8.y = 200;

	par->vect9.x = 1000;
	par->vect9.y = 200;

	par->vect10.x = 1200;
	par->vect10.y = 500;

	par->vect11.x = 600;
	par->vect11.y = 40;

	par->vect12.x = 200;
	par->vect12.y = 250;

	par->vect13.x = 720;
	par->vect13.y = 250;

}

void	text_init(t_par *par)
{
	par->step = 0;
	par->htp = 0;
	par->corps = 0;
	par->texture1 = sfTexture_createFromFile("sprites/menu_font.jpg", NULL);
	par->texture2 = sfTexture_createFromFile("sprites/logo.png", NULL);
	par->texture3 = sfTexture_createFromFile("sprites/logo_play.png", NULL);
	par->texture4 = sfTexture_createFromFile("sprites/logo_quit.png", NULL);
	par->texture5 = sfTexture_createFromFile("sprites/logo_htp.png", NULL);
	par->texture6 = sfTexture_createFromFile("sprites/character_font.jpg", NULL);
	par->texture7 = sfTexture_createFromFile("sprites/logo_retur.png", NULL);
	par->texture8 = sfTexture_createFromFile("sprites/htp.png", NULL);
	par->texture9 = sfTexture_createFromFile("sprites/logo_save.png", NULL);
	par->texture10 = sfTexture_createFromFile("sprites/fleche_gauche.png", NULL);
	par->texture11 = sfTexture_createFromFile("sprites/fleche_droite.png", NULL);
	par->texture12 = sfTexture_createFromFile("sprites/corps1.png", NULL);
	par->texture13 = sfTexture_createFromFile("sprites/corps2.png", NULL);
	par->texture14 = sfTexture_createFromFile("sprites/select.png", NULL);
	par->texture15 = sfTexture_createFromFile("sprites/save1-on.png", NULL);
	par->texture16 = sfTexture_createFromFile("sprites/save2-on.png", NULL);
}

void	sprite_init(t_par *par)
{
	par->sprite1 = sfSprite_create();
	par->sprite2 = sfSprite_create();
	par->sprite3 = sfSprite_create();
	par->sprite4 = sfSprite_create();
	par->sprite5 = sfSprite_create();
	par->sprite6 = sfSprite_create();
	par->sprite7 = sfSprite_create();
	par->sprite8 = sfSprite_create();
	par->sprite9 = sfSprite_create();
	par->sprite10 = sfSprite_create();
	par->sprite11 = sfSprite_create();
	par->sprite12 = sfSprite_create();
	par->sprite13 = sfSprite_create();
	par->sprite14 = sfSprite_create();
	par->sprite15 = sfSprite_create();
	par->sprite16 = sfSprite_create();
	par->sprite17 = sfSprite_create();
}
