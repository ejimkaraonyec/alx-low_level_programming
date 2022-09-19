/**
 * rev_string - reverse a string
 *
 * @s: pointer variable to the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int loc, i;

	for (loc = 0; s[loc] != '\0'; loc++)
		;

	loc--;
	i = 0;
	while (loc >= 0)
	{
		*s[i] = s[loc];
		loc--;
		i++;
	}
}
