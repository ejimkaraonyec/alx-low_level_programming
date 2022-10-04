#include "main.h"
#include <stdlib.h>

int _strlen(char *str);

/**
 * argstostr - concatenates all the arguments to a program
 *
 * @ac: argc - number of arguments
 * @av: argv - array of arguments
 *
 * Return: NULL on fail, else return a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int len = ac, arg, bytes, i;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++, size++)
			;
	}

	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);

	i = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];
		str[i++] = '\n';
	}
	str[size] = '\0';

	return (str);
}
