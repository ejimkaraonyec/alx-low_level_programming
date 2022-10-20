#include "lists.h"

void __attribute__((constructor)) before(void);

/**
 * before - print before the main function
 * Return: void
 */

void __attribute__((constructor)) before(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
