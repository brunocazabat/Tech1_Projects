/*
** EPITECH PROJECT, 2017
** window
** File description:
** display a window with 1 pixel in it
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "Include/my.h"

struct framebuffer {
	unsigned int width;
	unsigned int height;
	sfUint8 *pixels;
};

typedef struct framebuffer framebuffer_t;

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)	
{
	framebuffer_t *a;

	a = malloc(sizeof(framebuffer_t));
	a->width = width + 100;
	a->height = height + 100;
	a->pixels = malloc(sizeof(sfUint8) * 4 * width * height + 1000);

	return (a);	
}

void	my_put_pixel(framebuffer_t *buffer, unsigned int x, unsigned int y)
{
	int i = 0;
	int j = 0;
	
	while (j != 50) {
		while (i != 50) {
			buffer->pixels[y * buffer->width * 4 + x * 4 + i + (buffer->width * j)] = rand()%255;
			buffer->pixels[y * buffer->width * 4 + x * 4 + 1 + i] = rand()%255;
			buffer->pixels[y * buffer->width * 4 + x * 4 + 2 + i] = rand()%255;
			buffer->pixels[y * buffer->width * 4 + x * 4 + 3 + i] = 255;
			i++;
		}
		j++;
		i = 0;
	}
}

int	my_screensaver()
{
	struct var_list *var;

	sfVideoMode mode = {1920, 1080, 32};
	sfEvent event;
	framebuffer_t*	buffer;
	sfTime	time;
	int x = 0;
	int y = 0;

	var = malloc(sizeof(*var));
	var->window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
	var->clock = sfClock_create();
	buffer = framebuffer_create(1920, 1080);
	var->texture2 = sfTexture_create(1920, 1080);
	if (!var->window)
		return (-1);
	if (!var->texture2)
		return (84);
	var->sprite = sfSprite_create();
	sfSprite_setTexture(var->sprite, var->texture2, sfTrue);
	sfRenderWindow_setFramerateLimit(var->window, 50);
	while (sfRenderWindow_isOpen(var->window) == sfTrue) {	
		sfRenderWindow_clear(var->window, sfBlack);
		x = rand()%1920;
		y = rand()%1080;
		my_put_pixel(buffer, x, y);
		sfTexture_updateFromPixels(var->texture2, buffer->pixels, 1920, 1080, 0, 0);
		sfRenderWindow_drawSprite(var->window, var->sprite, NULL);
		sfRenderWindow_display(var->window);
		while (sfRenderWindow_pollEvent(var->window, &event)) {
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(var->window);
		}
		time = sfClock_getElapsedTime(var->clock);
		var->seconds = time.microseconds / 300000.0;
		if (var->seconds > 1.0)
			sfClock_restart(var->clock);
	}
	sfTexture_destroy(var->texture2);
	sfRenderWindow_destroy(var->window);
	return (0);
}
