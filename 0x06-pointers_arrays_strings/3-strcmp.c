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
	char *ptr_s1 = s1;
	char *ptr_s2 = s2;
	while (*ptr_s1 != '\0' && *ptr_s2 != '\0' && *ptr_s1 == *ptr_s2)
	{
		ptr_s1++;
		ptr_s2++;
	}

	return (*ptr_s1 - *ptr_s2);
}
