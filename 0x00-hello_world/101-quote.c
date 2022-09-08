#include <stdio.h>
#include <unistd.h>

/**
 * main - print quote
 *
 * Description: This program prints out the quote
 * passed to write function
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, str, strlen(str));
	return (1);
}
