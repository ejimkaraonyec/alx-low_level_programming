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
	char *ptr_s = str;
	char *src = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (; *str != '\0'; *str++)
	{
		for (i = 0; i < 53; i++)
		{
			if (*str == src[i])
			{
				*str = code[i];
				break;
			}
		}
	}

	return (ptr_s);
}
