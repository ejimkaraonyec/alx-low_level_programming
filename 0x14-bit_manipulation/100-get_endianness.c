#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 for big endian or 1 for little endian
 */

int get_endianness(void)
{
	unsigned int ui = 1;
	char *ch = (char *) &ui;

	return ((int) *ch);
}
