#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print product of two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if error, else return 0
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
