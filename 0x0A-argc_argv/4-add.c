#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * isdigit - checks to see if input is a number
 *
 * @s: poointer to a sting
 *
 * Return: 1 if it is a number, else return 0
 */

int isdigit(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

/**
 * main - prints the sum of positive numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if error, else return 0
 */

int main(int argc, char *argv[])
{
	int i, sum, is_num;

	sum = 0;
	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			is_num = isdigit(argv[i]);
			if (is_num == 1)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
