#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: pointer to the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
		while (size-- > 0)
		{
			action(*array);
			array++;
		}
}
