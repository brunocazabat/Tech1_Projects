/*
** EPITECH PROJECT, 2018
** duostumper5
** File description:
** mainputemain
*/

#include "include/my.h"

int	pick_random_word(t_data *data, char **tab)
{
	int j = 0;
	int k = rand()% my_arraylen(tab);

	data->str = malloc(sizeof(char *));
	strcpy(data->str, tab[k]);
	return (0);
}

void	rule()
{
	write(1, "*: invalid letter\n", 18);
	write(1, "?: incorrectly placed letter\n", 29);
	write(1, "Will you find the secret word?\n", 31);
}

int	main(int ac, char **av)
{
	char	**tab = NULL;
	t_data	data;

	rule();
	srand(time(NULL));
	if (ac != 2)
		return (84);

	tab = calc_size(av[1]);
	pick_random_word(&data, tab);
	try_rounds(&data, hide_word(&data));
	return (0);
}
