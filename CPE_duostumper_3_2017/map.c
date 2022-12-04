/*
** EPITECH PROJECT, 2018
** map
** File description:
** tictactoz
*/

#include "include/my.h"

char	**map(t_data *data)
{
	int	x = 0;
	int	y = 0;

	while (y != data->grid_size + 1) {
		data->tab[y] = malloc(sizeof(char) * data->grid_size + 1);
		y++;
	}
	y = 0;
	while (y < data->grid_size) {
		while (x < data->grid_size) {
			data->tab[y][x] = ' ';
			x++;
		}
		x = 0;
		y++;
	}
	return (data->tab);
}

void	display(t_data *data)
{
	int	i = 0;

	my_putstr("+");
	while (i != data->grid_size) {
		my_putstr("-");
		i++;
	}
	my_putstr("+\n");
	i = 0;
	while (i != data->grid_size) {
		my_putstr("|");
		my_putstr(data->tab[i]);
		my_putstr("|\n");
		i++;
	}
	i = 0;
	my_putstr("+");
	while (i != data->grid_size) {
		my_putstr("-");
		i++;
	}
	my_putstr("+\n");
}
