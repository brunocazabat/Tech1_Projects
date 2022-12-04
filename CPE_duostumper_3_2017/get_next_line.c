/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** ok
*/

#include "include/my.h"
#include "get_next_line.h"

#define READ_SIZE (2)

char	*get_next_line(int fd)
{
	static char *str;
	char *buffer;
	int size = 0;
	int n;
	
	if (str == NULL){
		if ((str = malloc(sizeof(char))) == NULL)
			return (NULL);
		str[0] = 0;
	}
	if ((buffer = malloc(sizeof(char) * READ_SIZE + 1)) == NULL
	|| (size = read(fd, buffer, READ_SIZE)) == -1)
		return (NULL);
	if (size == 0)
		return (NULL);
	buffer[size] = 0;
	str = strcat(str, buffer);
	for (size = 0; str[size] && str[size] != '\n'; size++);
	if (str[size] == 0)
		return (get_next_line(fd));
	if ((buffer = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	buffer[size] = 0;
	for (n = 0; n < size; n++)
		buffer[n] = str[n];
	buffer[n] = '\0';
	str += size + 1;
	return (buffer);
}
