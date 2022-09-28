#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: integer parameter
 *
 * Return: -1 if n is less than 0, 1 if n is 0,
 *         else return factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
