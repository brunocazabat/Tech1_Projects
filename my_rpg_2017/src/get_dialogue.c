/*
** EPITECH PROJECT, 2018
** get_dialogue
** File description:
** get_dialogue
*/

#include "../include/flo.h"

int	get_size(char *path)
{
	int size = 0;
	char c = '\0';
	int fd = open(path, O_RDONLY);

	if (fd == -1)
		exit(84);
	while (read(fd, &c, 1) > 0)
		size++;
	if (close(fd) == -1)
		exit(84);
	return (size);
}

char	*get_dialogue(char *path)
{
	int fd = open(path, O_RDONLY);
	int size = get_size(path);
	char *tmp = malloc(sizeof(char) * (size + 1));

	memset(tmp, '\0', size);
	if (fd == -1)
		exit(84);
	if (read(fd, tmp, size) == -1)
		exit(84);
	if (close(fd) == -1)
		exit(84);
	return (tmp);
}
