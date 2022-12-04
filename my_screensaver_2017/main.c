/*
** EPITECH PROJECT, 2017
** main
** File description:
** main of my screensaver
*/

#include "Include/my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>

void	error_display(void)
{
        my_putstr("./my_screensaver:  bad arguments:  0 given but 1 is required\n");
	my_putstr("retry with -h\n");
}

void	description_display(void)
{
	my_putstr("1:   pixels of random colors appear randomly on the screen\n");
	my_putstr("2:   draw horizontal lines of random coloured pixels\n");
}

void	usage_display(void)
{
	my_putstr("animation rendering in a CSFML window\n\n.");
	my_putstr("USAGE\n");
	my_putstr(" ./my_screensaver [OPTIONS] animation_id\n");
	my_putstr("  animation_id    ID of the animation to process (1 or 2).\n\n");
	my_putstr("OPTIONS\n");
	my_putstr(" -d               print the description of all the animations and quit.\n");
	my_putstr(" -h               print the usage and quit.\n\n");
}

int	checkstr(int ac, char **av)
{
	int i = 0;
	
	if (ac != 2) {
		error_display();
		i = 2;
	}
	if (ac == 2) {
		if (av[1][0] == '-' && av[1][1] == 'h') {
			usage_display();
			i = 1;
		}
		if (av[1][0] == '-' && av[1][1] == 'd') {
			description_display();
			i = 1;
		}
		if (i == 0 && (av[1][0] <= '0' || av[1][0] >= '6'))
			error_display();
		if (i == 0 && av[1][1] != '\0') {
			error_display();
			i = 2;
		}
	}
	return (i);
}

int	main(int ac, char **av)
{
	int i;
	
	i = checkstr(ac, av);
	if (i == 2) 
		return (84);
	if (i ==0) {
		if (av[1][0] == '1')
			my_screensaver();
		if (av[1][0] == '2')
			my_screensaver2();
		return (0);
	}
	if (i == 1)
		return (0);
}
