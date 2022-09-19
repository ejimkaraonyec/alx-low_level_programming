#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this program generates and prints
 * to the standard output a random valid password
 *
 * Return: void
 */

int main(void)
{
	int pwd;

	srand(time(0));
	pwd = rand();
	printf("%i\n", pwd);

	return (0);
}
