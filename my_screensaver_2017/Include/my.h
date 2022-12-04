/*
** EPITECH PROJECT, 2017
** stumper
** File description:
** stumper
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct var_list
{
	sfRenderWindow*	window;
	sfTexture* texture2;
	sfSprite* sprite;
	sfClock *clock;
	float seconds;
}var_list;

int	my_putchar(char c);
int	my_putstr(char const *str);
int	my_put_nbr_base(int nb, char *base);
int 	main(int ac, char **av);
int	my_screensaver();
int	my_screensaver2();

#endif /*MY_H_ */
