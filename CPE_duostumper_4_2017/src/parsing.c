/*
** EPITECH PROJECT, 2018
** parsing
** File description:
** pars
*/

#include "my.h"

int	check_str(int ac, char **av, int i, t_data *data)
{
	if (i + 1 == ac) {
		if (check_option(av[i - 1], data)) {
			data->str = strdup(av[i]);
		} else if (i - 1 != 0) {
			data->str = strdup(av[i - 1]);
			data->search = strdup(av[i]);
		} else {
			data->str = strdup(av[i]);
		}
	}
	return (0);
}

int	check_option(char *str, t_data *data)
{
	if (!strcmp(str, "-r")) {
		data->opt_r = 1;
	} else if (!strcmp(str, "-t")) {
		data->opt_t = 1;
	} else {
		return (0);
	}
	return (1);
}

int	parse_me(int ac, char **av, t_data *data)
{
	int	i = 0;

	if (ac == 1)
		return (0);
	while (av[++i]) {
		if (check_option(av[i], data));
		else
			check_str(ac, av, i, data);
	}
	return (1);
}
