/*
** EPITECH PROJECT, 2018
** game
** File description:
** loop
*/

#include "include/my.h"

char	*hide_word(t_data *data)
{
	char *whide = malloc(sizeof(char) * my_strlen(data->str));
	int	i = 1;
	int	j = 1;
	whide[0] = data->str[0];

	while (data->str[i++]) {
		whide[j] = data->str[i];
		j++;
	}
	my_putstr(whide);
	write(1, "\n", 1);
	return (whide);
}

int	good_long(t_data *data, char *whide, char *line)
{
	int	i = 0;
	int	j = 0;

	while (line[i++] && data->str[j++]);
	if (i > j)
		my_putstr("Word too long. Retry");
	if (i > j)
		my_putstr("Word too short. Retry");
}

int	main()
{
	t_data data;

	data.str = "bonjour";
	data.str = hide_word(&data);
	return (0);
}
