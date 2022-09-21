#include "main.h"

/**
 * leet - encode a string into 1337
 *
 * @s: pointer to character string array
 *
 * Return: the result
 */

char *leet(char *s)
{
	int i, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
				str[i] = j + '0';
		}
	}

	return (s);
}
