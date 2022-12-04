/*
** EPITECH PROJECT, 2017
** strlen
** File description:
** 
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int 	my_strlen(char const *str)
{
	int leng = 0;
	while (str[leng] != '\0')
	{
		leng+=1;
	}
	return (leng);
}
