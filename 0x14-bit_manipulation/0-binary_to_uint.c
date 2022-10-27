#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: pointer to binary number (string)
 *
 * Return: 0 if b is NULL; else, result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0, pow = 0;

	if (b == NULL || (*b != '0' && *b != '1'))
		return (0);
	while (*(b + len) != '\0')
		len++;
	for (len--; len >= 0; len--)
	{
		if (*(b + len) != '0' && *(b + len) != '1')
			return (0);
		result = result + (*(b + len) - '0') * (1 << pow);
		pow++;
	}
	return (result);
}
