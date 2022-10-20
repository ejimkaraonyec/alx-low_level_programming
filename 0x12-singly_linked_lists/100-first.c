#include "lists.h"

void before(void) __attribute__((constructor));

/**
 * before - print before the main function
 * Return: void
 */

void before(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
