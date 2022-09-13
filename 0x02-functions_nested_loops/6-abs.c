#include "main.h"

/**
 * _abs - find absolute value of an integer
 *
 * @n: the given integer
 *
 * Return: integer
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (n);
	else
		return (-n);
}
