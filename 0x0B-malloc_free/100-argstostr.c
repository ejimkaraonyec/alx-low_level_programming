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
	int len, arg, bytes, i;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (len = 0, arg = 0; arg < ac; arg++)
		len += _strlen(*(av + arg)) + 1;

	str = (char *) malloc(sizeof(char) * length + 1);
	if (str == NULL)
		return (NULL);

	i = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (bytes = 0; bytes < _strlen(*(av + arg)); bytes++)
		{
			*(str + i) = av[i][j];
			i++;
		}
		*(str + i) = '\n';
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

/**
 * _strlen - gets string length
 * @str: string pointer
 * Return: length (int)
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; *(str + len) != '\0'; len++)
		;

	return (length);
}
