/*
** EPITECH PROJECT, 2017
** task01
** File description:
** my putchar
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}
