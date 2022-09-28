#include "main.h"

int isqrt(int n, int i);

/**
 * _sqrt_recursion - returns square root of a number
 *
 * @n: integer parameter
 *
 * Return: -1 if no natural square root,
 *         else return natural square root
 */

int _sqrt_recursion(int n)
{
	int square = 2;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (isqrt(n, square));
}

/**
 * isqrt - checks for squa root
 *
 * @n: number to check for square root
 * @i: square root
 *
 * Return: -1 if not found, else return square root
 */

int isqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (isqrt(n, i + 1));
}
