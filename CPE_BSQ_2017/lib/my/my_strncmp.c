/*
** EPITECH PROJECT, 2017
** my_strncmp
** File description:
** my_strncmp
*/

#include "my.h"

int	my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;

	if (my_strlen(s1) != my_strlen(s2))
		return (1);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n) {
		if (s1[i] != s2[i])
			return (1);
		i = i + 1;
	}
	return (0);
}
