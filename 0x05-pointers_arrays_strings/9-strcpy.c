#include "main.h"

/**
 * _strcpy - copy src to dest
 *
 * @dest: pointer to a char to be changed
 * @src: pointer to a source char
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);

}
