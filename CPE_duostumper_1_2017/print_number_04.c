/*
** EPITECH PROJECT, 2018
** print
** File description:
** print
*/

#include "include/my.h"

void	print0(int ligne)
{
	if (ligne == 0)
		printf(" 000 ");
	if (ligne == 1)
		printf("0   0");
	if (ligne == 2)
		printf("0   0");
	if (ligne == 3)
		printf("0   0");
	if (ligne == 4)
		printf(" 000 ");
}

void	print1(int ligne)
{
	if (ligne == 0)
		printf(" 000 ");
	if (ligne == 1)
		printf("0 00 ");
	if (ligne == 2)
		printf("  00 ");
	if (ligne == 3)
		printf("  00 ");
	if (ligne == 4)
		printf(" 0000");
}

void	print2(int ligne)
{
	if (ligne == 0)
		printf(" 000 ");
	if (ligne == 1)
		printf("0   0");
	if (ligne == 2)
		printf("   0 ");
	if (ligne == 3)
		printf(" 0   ");
	if (ligne == 4)
		printf("00000");
}

void	print3(int ligne)
{
	if (ligne == 0)
		printf("0000 ");
	if (ligne == 1)
		printf("    0");
	if (ligne == 2)
		printf(" 000 ");
	if (ligne == 3)
		printf("    0");
	if (ligne == 4)
		printf("0000 ");
}

void	print4(int ligne)
{
	if (ligne == 0)
		printf("  00 ");
	if (ligne == 1)
		printf(" 0 0 ");
	if (ligne == 2)
		printf("0  0 ");
	if (ligne == 3)
		printf("00000");
	if (ligne == 4)
		printf("   0 ");
}
