#include "main.h"
/**
 * *rot13 - encode a string using rot13.
 *
 * @str: character string pointer
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i, j;

	char *src = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	i = j = 0;

	for (; str[i]; i++)
	{
		for (; src[j]; j++)
		{
			if (str[i] == src[j])
			{
				str[i] = code[j];
				break;
			}
		}
	}

	return (str);
}
