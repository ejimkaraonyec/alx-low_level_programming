#include "main.h"

int _palindrome(char *s, int start, int end);
int _strlenrec(char *s);

/**
 * is_palindrome - palindrome? 1 : 0
 *
 * @s: string pointer
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (_palindrome(s, 0, _strlenrec(s) - 1));
}

/**
 * _palindrome - check for palindrome
 *
 * @s: string pointer
 * @start: start
 * @end: end
 *
 * Return: 1 if palindrom, else return 0
 */

int _palindrome(char *s, int start, int end)
{
	if (*(s + start) != *(s + end))
		return (0);
	else if (start == end && *(s + start) == *(s + end))
		return (1);
	else if (start == end - 1 && *(s + start) == *(s + end))
		return (1);
	else
		return (_palindrome(s, start + 1, end - 1));
}

/**
 * _strlenrec - calculates length of a string
 *
 * @s: string pointer
 *
 * Return: string length
 */

int _strlenrec(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlenrec(s + 1));
}
