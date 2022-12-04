/*
** EPITECH PROJECT, 2018
** textcount
** File description:
** text
*/

#include "my.h"

int	add_occ(t_occ **list, char c, int i)
{
	t_occ	*new = malloc(sizeof(t_occ));
	t_occ	*tmp = *list;

	if (!new)
		return (0);
	new->i = i;
	new->c = c;
	new->use = 0;
	new->next = NULL;
	if (tmp) {
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	} else {
		*list = new;
	}
	return (1);
}

int	check_found(char *str, t_data *data)
{
	int	i = -1;
	t_occ	*tmp = data->occ;

	while (str[++i]) {
		tmp = data->occ;
		while (tmp && str[i] != tmp->c) {
			tmp = tmp->next;
		}
		if (tmp) {
			tmp->i += 1;
		}
	}
	return (0);
}

int	search_occurence(char *str, char *search, t_data *data)
{
	int	i = -1;
	t_occ	*tmp = data->occ;

	while (search[++i]) {
		tmp = data->occ;
		while (tmp && search[i] != tmp->c) {
			tmp = tmp->next;
		}
		if (!tmp) {
			add_occ(&data->occ, search[i], 0);
		}
	}
	check_found(str, data);
	return (0);
}

void	aff_list(t_data *data)
{
	t_occ	*tmp = data->occ;

	while (tmp) {
		printf("%c:%d\n", tmp->c, tmp->i);
		tmp = tmp->next;
	}
}

int	textcount(t_data *data)
{
	if (data->search == NULL && data->str) {
		search_occurence(data->str, data->str, data);
	} else if (data->str) {
		search_occurence(data->str, data->search, data);
	}
	if (data->opt_t == 1)
		bubble_sort(data);
	aff_list(data);
	return (0);
}
