#include "main.h"

/**
 * strcmp - compare s2 to s1
 *
 * @s1: the first string array that is compared
 * @s2: the second string array that is compared
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i, result;

	i = result = 0;
	for (; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			result = result;
		else if (s1[i] < s2[i])
			result--;
		else
			result++;
	}
	return (result);
}
