/**
 * rev_string - reverse a string
 *
 * @s: pointer variable to the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int loc;

	for (loc = 0; s[loc] != '\0'; loc++)
		;

	loc--;
	while (loc >= 0)
	{
		*s[loc] = loc;
		loc--;
	}
}
