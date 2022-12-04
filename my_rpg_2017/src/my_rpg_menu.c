/*
** EPITECH PROJECT, 2017
** my_rpg_menu.c
** File description:
** my_rpg
*/

#include "../include/my.h"

void	windowandmusic_init(t_par *par)
{
	sfVideoMode mode = {1440, 600, 90};
	par->window = sfRenderWindow_create(mode, "RPG_start_menu", sfResize | sfClose, NULL);
	par->music1 = sfMusic_createFromFile("soundtrack-menu/soundtrack.ogg");
	sfMusic_setLoop(par->music1, 1);
	sfMusic_play(par->music1);
}

void	set_pos(t_par *par)
{
	sfSprite_setPosition(par->sprite1, par->vect1);
	sfSprite_setPosition(par->sprite2, par->vect2);
	sfSprite_setPosition(par->sprite3, par->vect3);
	sfSprite_setPosition(par->sprite4, par->vect6);
	sfSprite_setPosition(par->sprite5, par->vect5);
	sfSprite_setPosition(par->sprite6, par->vect1);
	sfSprite_setPosition(par->sprite7, par->vect5);
	sfSprite_setPosition(par->sprite8, par->vect1);
	sfSprite_setPosition(par->sprite9, par->vect4);
	sfSprite_setPosition(par->sprite10, par->vect7);
	sfSprite_setPosition(par->sprite11, par->vect8);
	sfSprite_setPosition(par->sprite12, par->vect10);
	sfSprite_setPosition(par->sprite13, par->vect9);
	sfSprite_setPosition(par->sprite14, par->vect9);
	sfSprite_setPosition(par->sprite15, par->vect11);
	sfSprite_setPosition(par->sprite16, par->vect12);
	sfSprite_setPosition(par->sprite17, par->vect13);
}

void	drawsprite1(t_par *par)
{
	sfRenderWindow_clear(par->window, sfBlack);
	par->mouse.x = sfMouse_getPositionRenderWindow(par->window).x;
	par->mouse.y = sfMouse_getPositionRenderWindow(par->window).y;

	if (par->step == 0) {
		sfRenderWindow_drawSprite(par->window, par->sprite1, NULL);
		sfRenderWindow_drawSprite(par->window, par->sprite2, NULL);
		sfRenderWindow_drawSprite(par->window, par->sprite3, NULL);
		sfRenderWindow_drawSprite(par->window, par->sprite4, NULL);
		sfRenderWindow_drawSprite(par->window, par->sprite9, NULL);
		if (par->htp == 0)
			sfRenderWindow_drawSprite(par->window, par->sprite5, NULL);
		if (par->htp == 1) {
			sfRenderWindow_drawSprite(par->window, par->sprite7, NULL);
			sfRenderWindow_drawSprite(par->window, par->sprite8, NULL);
		}
	}
}

void	drawsprite2(t_par *par)
{
	if (par->step == 1) {
		sfRenderWindow_drawSprite(par->window, par->sprite6, NULL);
		sfRenderWindow_drawSprite(par->window, par->sprite7, NULL);
		sfRenderWindow_drawSprite(par->window, par->sprite10, NULL);
		sfRenderWindow_drawSprite(par->window, par->sprite11, NULL);
		sfRenderWindow_drawSprite(par->window, par->sprite12, NULL);
		sfRenderWindow_drawSprite(par->window, par->sprite15, NULL);
		if (par->corps == 0)
			sfRenderWindow_drawSprite(par->window, par->sprite13, NULL);
		if (par->corps == 1)
			sfRenderWindow_drawSprite(par->window, par->sprite14, NULL);
	}
}

int	my_menu(t_par *par)
{
	sfEvent	event;
	windowandmusic_init(par);
	text_init(par);
	sprite_init(par);
	vect_init1(par);
	vect_init2(par);
	set_text(par);
	set_pos(par);

	while (sfRenderWindow_isOpen(par->window)) {
		drawsprite1(par);
		drawsprite2(par);
		drawsprite3(par);
		while (sfRenderWindow_pollEvent(par->window, &event)) {
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(par->window);
			if (sfKeyboard_isKeyPressed(sfKeyEscape))
				sfRenderWindow_close(par->window);
			if (event.type == sfEvtMouseButtonPressed) {
				if (par->mouse.x >= par->vect5.x &&
				par->mouse.x <= par->vect5.x + 362 &&
				par->mouse.y >= par->vect5.y &&
				par->mouse.y <= par->vect5.y + 72 &&
				par->step == 0) {
					if (par->htp == 0)
						par->htp = 1;
					else
						par->htp = 0;
				}
				if (par->mouse.x >= par->vect6.x &&
				par->mouse.x <= par->vect6.x + 124 &&
				par->mouse.y >= par->vect6.y &&
				par->mouse.y <= par->vect6.y + 64 &&
				par->step == 0)
					sfRenderWindow_close(par->window);
				if (par->mouse.x >= par->vect3.x &&
				par->mouse.x <= par->vect3.x + 143 &&
				par->mouse.y >= par->vect3.y &&
				par->mouse.y  <= par->vect3.y + 63 &&
				par->step == 0)
					par->step = 1;
				if (par->mouse.x >= par->vect5.x &&
				par->mouse.x <= par->vect5.x + 226 &&
				par->mouse.y >= par->vect5.y &&
				par->mouse.y  <= par->vect5.y + 65 &&
				par->step != 0)
					par->step = 0;
				if (par->mouse.x >= par->vect4.x &&
				par->mouse.x <= par->vect4.x + 150 &&
				par->mouse.y >= par->vect4.y &&
				par->mouse.y  <= par->vect4.y + 58)
					par->step = 2;
				if (par->mouse.x >= par->vect7.x &&
				par->mouse.x <= par->vect7.x + 200 &&
				par->mouse.y >= par->vect7.y &&
				par->mouse.y  <= par->vect7.y + 200)
					if (par->corps == 1)
						par->corps = 0;
				if (par->mouse.x >= par->vect8.x &&
				par->mouse.x <= par->vect8.x + 200 &&
				par->mouse.y >= par->vect8.y &&
				par->mouse.y <= par->vect8.y + 200)
					if (par->corps == 0)
						par->corps = 1;
				if (par->mouse.x >= par->vect12.x &&
				par->mouse.x <= par->vect12.x + 492 &&
				par->mouse.y >= par->vect12.y &&
				par->mouse.y  <= par->vect12.y + 242 &&
				par->step == 2) {
					sfRenderWindow_close(par->window);
					sfMusic_destroy(par->music1);
					rpg_main_win();
				}
				if (par->mouse.x >= par->vect13.x &&
				par->mouse.x <= par->vect13.x + 495 &&
				par->mouse.y >= par->vect13.y &&
				par->mouse.y  <= par->vect13.y + 241 &&
				par->step == 2) {
					sfRenderWindow_close(par->window);
					sfMusic_destroy(par->music1);
					rpg_main_win();
				}
				if (par->mouse.x >= par->vect10.x &&
				par->mouse.x <= par->vect10.x + 143 &&
				par->mouse.y >= par->vect10.y &&
				par->mouse.y <= par->vect10.y + 63) {
					sfRenderWindow_close(par->window);
					sfMusic_destroy(par->music1);
					rpg_main_win();
				}
			}
		}
		sfRenderWindow_display(par->window);
	}
	sfMusic_destroy(par->music1);
	return (0);
}
