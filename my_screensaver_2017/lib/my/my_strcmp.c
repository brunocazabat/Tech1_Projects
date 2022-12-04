/*
** EPITECH PROJECT, 2017
** my strcmp
** File description:
** compare 2 str
*/

int	my_strcmp(char const *str, char const *str2)
{
	int size = 0;

	while (str[size] == str2[size]) {
		if (str[size] == '\0' && str[size] == str2[size])
			return (0);
		size = size + 1;
	}
	return (str[size] - str2[size]);
}
