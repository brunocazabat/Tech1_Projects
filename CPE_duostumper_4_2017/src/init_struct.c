/*
** EPITECH PROJECT, 2018
** init_struct
** File description:
** init
*/

#include "my.h"

t_data		*init_struct(void)
{
	t_data	*data = malloc(sizeof(t_data));

	if (!data)
		return (NULL);
	data->str = NULL;
	data->search = NULL;
	data->occ = NULL;
	data->opt_t = 0;
	data->opt_r = 0;
	return (data);
}
