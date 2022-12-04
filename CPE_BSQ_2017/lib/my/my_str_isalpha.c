/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** my_str_isalpha
*/

int	my_str_isalpha(char const *str)
{
	int i = 0;
	while (str[i] != '\0') {
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		str = str + 1;
	}
	return (1);
}
