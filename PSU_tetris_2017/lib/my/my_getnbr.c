/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** my_getnbr
*/

int	my_getnbr(char *str)
{
	int	i = 0;
	int	nb = 0;
	int	j = 0;

	while (str[i] != '\0') {
		while (str[i] == '-') {
			i++;
			j++;
		}
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if (j % 2 == 1 && j > 0)
		nb = nb * -1;
	return (nb);
}
