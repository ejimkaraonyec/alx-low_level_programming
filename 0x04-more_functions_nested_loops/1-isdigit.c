#include "main.h"

/**
 * _isdigit - check if c is lowercase
 *
 * @c: an ascii character parameter
 *
 * Description: check if given parameter is a
 * digit from 0 to 9
 *
 * Return: 1 if true or 0 for otherwise
 */

int _isdigit(int c)
{
	int min;
	int max;

	min = 48;
	max = 57;
	if ((c - min) * (c - max) <= 0)
		return (1);
	else
		return (0);
}
