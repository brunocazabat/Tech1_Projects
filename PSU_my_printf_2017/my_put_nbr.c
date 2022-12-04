/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** my_put_nbr
*/

void	my_putchar(char c);

void	my_put_nbr(int nb)
{
	int mod = 0;

	if (nb <= 9 && nb >= 0)
		my_putchar(nb + '0');
	if (nb < 0) {
		my_putchar('-');
		nb = nb * -1;
		if (nb <= 9 && nb >= 0)
			my_put_nbr(nb);
	}
	if (nb > 9) {
		mod = nb % 10;
		my_put_nbr(nb / 10);
		my_putchar(mod + '0');
	}
}
