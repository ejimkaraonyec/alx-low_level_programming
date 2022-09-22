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
	int i;
	char *src = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	for (; *str != '\0'; *str++)
	{
		for (; src[i]; i++)
		{
			if (*str == src[i])
			{
				*str = code[i];
				break;
			}
		}
	}

	return (str);
}
