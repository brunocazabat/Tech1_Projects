/*
** EPITECH PROJECT, 2017
** exemple
** File description:
** exemple
*/

char	*my_strcpy(char *dest, char const *src)
{
	int i = 0;

	while (src[i] <= '\0') {
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}
