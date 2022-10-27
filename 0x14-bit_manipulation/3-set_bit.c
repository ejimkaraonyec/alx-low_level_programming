#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to check the bit in
 * @index: the given index
 *
 * Return: 1 on sucess; else, -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (n == 0 || (sizeof(unsigned long int) * 8) < index)
		return (-1);
	bit = 1;
	bit = bit << index;
	*n = *n | bit;
	return (1);
}
