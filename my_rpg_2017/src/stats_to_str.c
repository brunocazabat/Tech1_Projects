/*
** EPITECH PROJECT, 2018
** my_rpg_2017
** File description:
** stats_to_str
*/

#include "../include/flo.h"

void    copy(int i, int lens, char *buff, char *src)
{
	int j = 0;

	while (j < lens) {
		buff[i] = src[j];
		i++;
		j++;
	}
	buff[i] = '\0';
}

char    *my_strcat2(char *dest, char *src)
{
	char *buff = NULL;
	int lend = 0;
	int lens = 0;
	int i = 0;

	if (dest != NULL)
		lend = my_strlen(dest);
	lens = my_strlen(src);
	if ((buff = malloc(sizeof(char) * (lend + lens + 2))) == NULL)
		return (NULL);
	if (dest != NULL) {
		while (dest[i] != '\0') {
			buff[i] = dest[i];
			i++;
		}
	}
	copy(i, lens, buff, src);
	return (buff);
}

char	*my_itoa(int nb)
{
	int i = 0;
	int j = nb;
	char *str = NULL;

	while (j > 0) {
		j /= 10;
		i++;
	}
	if ((str = malloc(sizeof(char) * (i + 1))) == NULL)
		exit(84);
	str[i] = '\0';
	while (i-- > 0) {
		str[i] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}

char	*save_concat(data_t *d, char *str)
{
	char *hp = my_itoa(d->my_hp);
	char *hp_max = my_itoa(d->my_lvl * 8 + 2);
	char *atk = my_itoa(d->my_atk);
	char *def = my_itoa(d->my_def);

	str = my_strcat2(str, my_strcat("\n\nHP :", hp));
	str = my_strcat2(str, my_strcat("/", hp_max));
	str = my_strcat2(str, my_strcat("\n\nATK :", atk));
	str = my_strcat2(str, my_strcat("\n\nDEF :", def));
	return (str);
}

char	*save_cat(data_t *d)
{
	char *lvl = my_itoa(d->my_lvl);
	char *xp = my_itoa(d->xp);
	char *xp_max = my_itoa(d->max_xp);
	char *str = NULL;

	str = my_strcat2("LVL : ", lvl);
	str = my_strcat2(str, my_strcat("\n\nXP : ", xp));
	str = my_strcat2(str, my_strcat("/", xp_max));
	str = save_concat(d, str);
	return (str);
}
