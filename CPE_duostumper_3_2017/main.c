/*
** EPITECH PROJECT, 2018
** duostumper5
** File description:
** mainputemain
*/

#include "include/my.h"

void	my_put_nbr(int nb)
{
	if (nb < 0) {
		write(1, "-", 1);
		return (my_put_nbr(-nb));
	}
	if (nb >= 10)
		my_put_nbr(nb/10);
	write(1, nb % 10 + "0123456789", 1);
}

void	opt_finder(int ac, char **av, t_data *data)
{
	int a = 0;
	int i = 0;
	char *short_opt = ":s:";

	while (av[i]) {
		if (av[i][0] == '-' && av[i][1] == 'p'
		&& av[i][2] == '1' && av[i][3] == '\0')
			data->CHAR_P1 = av[i + 1][0];
		if (av[i][0] == '-' && av[i][1] == 'p'
		&& av[i][2] == '2' && av[i][3] == '\0')
			data->CHAR_P2 = av[i + 1][0];
		i++;
	}
	while ((a = getopt(ac, av, short_opt)) != -1) {
		switch (a) {
		case 's' :
			data->grid_size = atoi(optarg);
			break;
		}
	}
}

void	set_defaut(t_data *data)
{
	data->CHAR_P1 = 'X';
	data->CHAR_P2 = 'O';
	data->grid_size = 3;
	data->player_turn = 1;
}

int	main(int ac, char **av)
{
	t_data	data;
	data.tab = malloc(sizeof(char*) * (data.grid_size * 2) + 8);

	if (ac == 1)
		set_defaut(&data);
	else if (ac >= 2 && ac <= 7) {
		set_defaut(&data);
		opt_finder(ac, av, &data);
	}
	else
		return (84);
	map(&data);
	game(&data);

	return (0);
}
