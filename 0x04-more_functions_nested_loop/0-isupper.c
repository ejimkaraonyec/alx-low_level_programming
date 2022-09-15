#include "main.h"

/**
 * _isupper - check if c is lowercase
 *
 * @c: an ascii character parameter
 *
 * Description: check if given alphabec is in
 * uppercase or otherwise
 *
 * Return: 1 for uppercase or 0 for otherwise
 */

int _isupper(int c)
{
	int min;
	int max;

	min = 65;
	max = 90;
	if ((c - min) * (c - max) <= 0)
		return (1);
	else
		return (0);
}
}

