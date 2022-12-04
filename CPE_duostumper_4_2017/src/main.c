/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "my.h"

int	main(int ac, char **av)
{
	t_data	*data = init_struct();

	if (!data || !parse_me(ac, av, data))
		return (84);
	textcount(data);
	if (!data->str)
		return (84);
	return (0);
}
