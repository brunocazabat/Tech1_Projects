/*
** EPITECH PROJECT, 2017
** str_to_tab
** File description:
** str_to_tab
*/

#include <fcntl.h>
#include "include/my.h"

int	size(char *path)
{
	struct stat my_stat;
	int fd = open(path, O_RDONLY);

	if (fd == -1) {
		write(1, "error map in input\n", 19);
		return (84);
	}
	stat(path, &my_stat);
	close (fd);
	return (my_stat.st_size);
}

char	**calc_size(char *filepath)
{
	int t = size(filepath);
	int fd = open(filepath, O_RDONLY);
	char *buff = NULL;
	char **tab = NULL;

	if ((buff = malloc(sizeof(char) * (t + 1))) == NULL)
		return (NULL);
	if (fd == -1)
		return (NULL);
	read(fd, buff, t);
	tab = str_to_tab(buff);
	return (tab);
}

char	**str_to_tab(char *str)
{
	int y = nb_line(str);
	int i = 0;
	char **tab = NULL;
	int x = nb_cara(str, first_len(str));

	if ((tab =  malloc(sizeof(char*) * (y + 1))) == NULL)
		return (NULL);
	while (i < y) {
		if ((tab[i] = malloc(sizeof(char) * (x + 1))) == NULL)
			return (NULL);
		i++;
	}
	tab = str_tab(tab, str);
	return (tab);
}

char	**str_tab(char **tab, char *str)
{
	int i = 0;
	int k = 0;
	int j = 0;

	while (str[k] != '\0') {
		if (str[k] != '\n') {
			tab[i][j] = str[k];
			j++;
			k++;
		} else {
			i++;
			k++;
			j = 0;
		}
	}
	return (tab);
}
