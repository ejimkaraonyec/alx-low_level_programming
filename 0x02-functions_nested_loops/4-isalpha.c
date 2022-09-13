#include "main.h"

/**
 * _isalpha - check for alpha
 *
 * @c: the given parameter
 *
 * Return: 1 for alpha 0 for other
 */

int _isalpha(int c)
{
	int l_min;
	int l_max;
	int u_min;
	int u_max;

	l_min = 97;
	l_max = 122;
	u_min = 65;
	u_max = 90;
	if ((c - l_min) * (c - l_max) <= 0 || (c - u_min) * (c - u_max) <= 0)
		return (1);
	else
		return (0);
}
