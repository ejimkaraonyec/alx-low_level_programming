#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _isdigit(char *s);
int _strlen(char *s);
void errors(void);

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int s1len, s2len, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !_isdigit(s1) || !_isdigit(s2))
		errors();
	s1len = _strlen(s1);
	s2len = _strlen(s2);
	len = s1len + s2len;
	result = malloc(sizeof(*result) * len + 1);
	if (!result)
		return (1);
	for (i = 0; i <= len; i++)
		*(result + i) = 0;
	for (s1len = s1len - 1; s1len >= 0; s1len--)
	{
		digit1 = s1[s1len] - '0';
		carry = 0;
		for (s2len = _strlen(s2) - 1; s2len >= 0; s2len--)
		{
			digit2 = s2[s2len] - '0';
			carry += result[s1len + s2len + 1] + (digit1 * digit2);
			result[s1len + s2len + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[s1len + s2len + 1] += carry;
	}
	for (i = 0; i < len; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

/**
 * _isdigit - checks to see if input is a number
 * @s: poointer to a sting
 *
 * Return: 1 if it is a number, else return 0
 */

int _isdigit(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) < '0' || *(s + i) > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - calculate length of string
 * @s: string pointer
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
		;
	return (len);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}
