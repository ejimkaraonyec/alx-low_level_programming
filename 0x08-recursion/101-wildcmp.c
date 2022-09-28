#include "main.h"


/**
 * wildcmp - compares two strings that can contain *
 *
 * @s1: string pointer num 1
 * @s2: string pointer num 2 which may contain *
 *
 * Return: 1 if the strings are identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}
