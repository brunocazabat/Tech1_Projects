/*
** EPITECH PROJECT, 2018
** manage_list
** File description:
** manage
*/

#include "my.h"

int	my_swap(t_occ *tmp_a, t_occ *tmp_b)
{
	t_occ	tmp_c;

	tmp_c.c = tmp_a->c;
	tmp_c.i = tmp_a->i;
	tmp_a->c = tmp_b->c;
	tmp_a->i = tmp_b->i;
	tmp_b->c = tmp_c.c;
	tmp_b->i = tmp_c.i;
	return (0);
}

int	bubble_sort(t_data *data)
{
	t_occ	*tmp_a = data->occ, *tmp_b = NULL;

	if (tmp_a && tmp_a->next)
		tmp_b = tmp_a->next;
	while (tmp_b) {
		if (tmp_b->i > tmp_a->i) {
			my_swap(tmp_a, tmp_b);
			tmp_a = data->occ;
			tmp_b = tmp_a->next;
		} else {
			tmp_a = tmp_a->next;
			tmp_b = tmp_b->next;
		}
	}
	return (0);
}
