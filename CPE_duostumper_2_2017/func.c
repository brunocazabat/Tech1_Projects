/*
** EPITECH PROJECT, 2018
** func
** File description:
** for motus
*/

#include "include/my.h"

void	my_put_str(char *str)
{
	write(1, str, my_strlen(str));
}

char	*hide_word(t_data *data)
{
	char *sword = malloc(sizeof(char) * my_strlen(data->str));
	int	i = 0;
	int	j = 0;

	while (data->str[i++]) {
		//sword = good_letter(data, i, j, sword);
		sword[j] = '*';
		j++;
	}
	my_put_str(sword);
	write(1, "\n\n", 2);
	return (sword);
}

char	*good_letter(t_data *data, char *sword)
{
	int	i = 0;

	while (data->str[i]) {
		if (data->line[0] == data->str[i])
			sword[i] = data->line[0];
		i += 1;
	}
	return (sword);
}

int	is_win(char *str)
{
	int	i = 0;

	while (str[i]) {
		if (str[i] == '*')
			return (1);
		i += 1;
	}
	return (0);
}

int	try_rounds(t_data *data, char *sword)
{
	int	try = 1;
	int	max_try = (my_strlen(data->str) + 1);
	size_t	size = 0;
	char	*anws = malloc(sizeof(char) * my_strlen(data->str));


	data->line = malloc(sizeof(char) * 100);
	while (try <  max_try) {
		if (try >= max_try) {
			my_put_str("You lost !\n");
			return (0);
		}
		write(1, "Round ", 6);
		my_put_nbr(try);
		my_put_str("\n>");
		try = try + 1;
		if ((data->line = get_next_line(0)) == NULL)
			exit(0);
		good_letter(data, sword);
		my_put_str(sword);
		write(1, "\n\n", 2);
		if (is_win(sword) == 0) {
			my_putstr("\nCongratulations!\n");
			exit (0);
		}
	}
	my_putstr("\nYou lost!\n");
	return (0);
}
