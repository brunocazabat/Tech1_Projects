/*
** EPITECH PROJECT, 2017
** duostumper3
** File description:
** duostumper3
*/

#include "include/my.h"

void    opt_finder(int ac, char **av, t_data *data)
{
	int a = 0;
	char *short_opt = ":n:s:";

	while ((a = getopt(ac, av, short_opt)) != -1) {
		switch (a) {
		case 'n' :
			data->chiffre = optarg;
			break;
		case 's' :
			data->asset = optarg;
			break;
		}
	}
}

void	value_finder(t_data *data)
{
	data->lettre = my_strlen(data->chiffre);
}

int	boucle_print(t_data *data)
{
	
	int step = 5;
	int ligne = 0;

	printf("\n");
	while (ligne != step)
	{
		print0(ligne);
		printf(" ");
		print1(ligne);
		printf(" ");
		print2(ligne);
		printf(" ");
		print3(ligne);
		printf(" ");
		print4(ligne);
		printf(" ");
		print5(ligne);
		printf(" ");
		print6(ligne);
		printf(" ");
		print7(ligne);
		printf(" ");
		print8(ligne);
		printf(" ");
		print9(ligne);
		printf("\n");
		ligne++;
	}
}

int	main(int ac, char **av)
{
	t_data data;

	if (ac != 3 && ac != 5)
		return (84);
	
	opt_finder(ac, av, &data);
	value_finder(&data);
	boucle_print(&data);
	return (0);
}
