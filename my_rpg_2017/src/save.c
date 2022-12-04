/*
** EPITECH PROJECT, 2018
** save
** File description:
** save
*/

int	try_fopen(char *path)
{
	FILE *file = NULL;

	if ((file = fopen(path, "r")) == NULL)
		return (NULL);
	return (file);
}

int	try_open_creat(char *path)
{
	int fd = 0;

	if ((fd = open(path, O_CREAT | O_WRONLY | O_TRUNC,
		S_IRWXU | S_IRWXG | S_IRWXO)) == -1)
		return (-1);
	return (fd);
}

int	save_party(data_t *data, char *path)
{
	int fd = 0;

	if ((fd = try_open_creat(path)) == -1)
		return (-1);
	my_put_nbr_file(data->my_lvl, fd);
	write(fd, "\n", 1);
	my_put_nbr_file(data->cpos.x, fd);
	write(fd, "/", 1);
	my_put_nbr_file(data->cpos.y, fd);
	write(fd, "\n", 1);
	write(fd, "../Sprite/Sprite_sheet_char8.png\n", 30);
	my_put_nbr_file(data->xp, fd);
	write(fd, "\n", 1);
	my_put_nbr_file(data->hist_stat, fd);
	write(fd, "\n", 1);
	if (close(fd) == -1)
		return (-1);
	return (0);
}

int	get_save(data_t *data, char *path)
{
	FILE *file = NULL;
	char *buff = NULL;
	size_t n = 0;
	int i = -1;

	if ((file = try_fopen(path)) == NULL)
		return (-1);
	getline(&buff, &n, file);
	data->my_lvl = my_getnbr(buff);
	getline(&buff, &n, file);
	data->cpos.x = my_getnbr(buff);
	while (buff[++i] != '/');
	data->cpos.y = my_getnbr(&buff[++i]);
	getline(&buff, &n, file);
	data->xp = my_getnbr(buff);
	getline(&buff, &n, file);
	data->hist_stat = my_getnbr(buff);
	if (fclose(file) == -1)
		return (-1);
	return (0);
}
