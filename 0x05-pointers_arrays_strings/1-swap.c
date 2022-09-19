/**
 * swap_int - function to swap two integers using pointers
 *
 * @a: pointer variable that points to the first int
 * @b: pointer variable that points to the second int
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int *tmp;

	*tmp = *a;
	*a = *b;
	*b = *tmp;
}
