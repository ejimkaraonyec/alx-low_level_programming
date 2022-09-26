#include "main.h"

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
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
