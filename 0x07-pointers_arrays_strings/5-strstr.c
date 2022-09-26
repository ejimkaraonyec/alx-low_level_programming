#include "main.h"
#define NULL 0 /* a constant returned where the sequence isn't found */

/**
 * _strstr - locates a substring
 *
 * @haystack: the string to be scanned
 * @needle: the substring to be searched
 *          within haystack string.
 *
 * Return: a pointer to the first occurrence
 *         in haystack of any of the entire sequence
 *         of characters specified in needle, or a null
 *         pointer if the sequence is not present in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, nlen, st;

	i = j = st = 0;

	for (nlen = 0; needle[nlen] != '\0'; nlen++)
		;
	for (; haystack[i] != '\0'; i++)
	{
		for (; j < nlen && haystack[i] == needle[j]; j++, i++)
		{
			if (j == 0)
				st = i;
			if (j == nlen - 1)
				return (haystack + start);
		}
	}

	return (NULL);
}
