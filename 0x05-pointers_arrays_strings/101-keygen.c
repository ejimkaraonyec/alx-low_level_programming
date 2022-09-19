#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * @pwd: the password
 *
 * Description: this program generates and prints
 * to the standard output a random valid password
 *
 * Return: void
 */

int main(int pwd)
{
	srand(time(0));
	pwd = rand();
	printf("%d\n", pwd);

	return (0);
}
