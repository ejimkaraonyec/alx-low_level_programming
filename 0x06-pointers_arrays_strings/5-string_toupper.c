#include "main.h"

/**
 * *string_toupper - changes all lowercase to uppercase
 *
 * @array_s: pointer
 *
 * Return: array of character strings
 */

char *string_toupper(char *array_s)
{
	int i;

	for (i = 0; array_s[i] != '\0'; i++)
	{
		if (array_s[i] >= 'a' && array_s[i] <= 'z')
			array_s[i] = array_s[i] - 32;
	}

	return (array_s);
}
