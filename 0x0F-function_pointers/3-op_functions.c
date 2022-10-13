#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sums two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates
 * @a: first integer
 * @b: second integer
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates product
 * @a: first integer
 * @b: second integer
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates quotient
 * @a: dividend
 * @b: divisor
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates modulo
 * @a: dividend
 * @b: divisor
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
