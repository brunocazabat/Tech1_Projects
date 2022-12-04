/*
** EPITECH PROJECT, 2018
** duorush6
** File description:
** rush6
*/

#include "include/my.h"

void	switch_player(t_data *data)
{
	if (data->player_turn == 1)
		data->player_turn = 2;
	else
		data->player_turn = 1;
}

int	check_play(t_data *data)
{
	int i = 0;

	while (data->play[i] != '\0')
	{
		if (data->play[i] == ',') {
			data->play[i] = '\0';
			break;
		}
		i++;
	}
	data->x = atoi(&data->play[0]);
	data->y = atoi(&data->play[i + 1]);
	if (data->x > data->grid_size || data->y > data->grid_size)
		return (-1);

	return (0);
}

int	player_X_turn(t_data *data)
{
	if (check_play(data) == -1) {
		write(1, "your input is too big for the grid size\n", 40);
		return (-1);
	}
	if (data->player_turn == 1 && data->tab[data->x][data->y] == ' ')
		data->tab[data->x][data->y] = data->CHAR_P1;
	if (data->player_turn == 2 && data->tab[data->x][data->y] == ' ')
		data->tab[data->x][data->y] = data->CHAR_P2;
	return (0);
}

int	game(t_data *data)
{
	int round = 0;
	int max_round = (data->grid_size * data->grid_size);

	display(data);
        while (round != max_round)
	{
		write(1, "\nPlayer ", 7);
		my_put_nbr(data->player_turn);
		write(1, "> ", 2);
		if ((data->play = get_next_line(0)) == NULL)
			exit(0);
		if (player_X_turn(data) == -1)
			game(data);
		display(data);
		round++;
		switch_player(data);
	}
	
	return (0);
}
