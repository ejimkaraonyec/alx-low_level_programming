#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: number to check the bit in
 * @index: the given index
 *
 * Return: the bit at the index; else, -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	n = n >> index;
	return (n & 1);
}
