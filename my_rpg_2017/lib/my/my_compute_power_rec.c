/*
** EPITECH PROJECT, 2017
** my_compute_power_rec
** File description:
** my_compute_power_rec
*/

int	my_compute_power_rec(int nb, int power)
{
	int p;
	int i = p;

	if (p == 0)
		return (1);
	if (nb == 0)
		return (0);
	if (p > 1) {
		i = i - 1;
		nb = nb * my_compute_power_rec(nb, i);
	}
	return (nb);
}
