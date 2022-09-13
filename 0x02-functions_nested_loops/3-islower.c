#include "main.h"

/**
 * _islower - check if c is lowercase
 *
 * @c: an ascii character parameter
 *
 * Description: check if given alphabec is in
 * lowercase or uppercase
 *
 * Return: 1 for lowercase or 0 for uppercase
 */

int _islower(int c)
{
	int min;
	int max;

	min = 97;
	max = 122;
	if ((c - min) * (c - max) <= 0)
		return (1);
	else
		return (0);
}
