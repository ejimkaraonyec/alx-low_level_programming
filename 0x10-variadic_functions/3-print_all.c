#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints char
 * @chars: arguments
 */

void print_char(va_list chars)
{
	printf("%c", va_arg(chars, int));
}

/**
 * print_int - prints int
 * @ints: arguments
 */

void print_int(va_list ints)
{
	printf("%d", va_arg(ints, int));
}

/**
 * print_float - prints float
 * @floats: arguments
 */

void print_float(va_list floats)
{
	printf("%f", va_arg(floats, double));
}

/**
 * print_string - prints string
 * @strs: arguments
 */

void print_string(va_list strs)
{
	char *s = va_arg(strs, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints all
 * @format: type of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *s1 = "";
	char *s2 = ", ";

	op_t waku[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (waku[j].c != '\0')
		{
			if (waku[j].c == format[i])
			{
				printf("%s", s1);
				waku[j].f(args);
				s1 = s2;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
