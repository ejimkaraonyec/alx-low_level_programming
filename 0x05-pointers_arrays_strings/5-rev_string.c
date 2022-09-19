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
	char begin, end;

	for (loc = 0; s[loc] != '\0'; loc++)
		;

	loc--;
	i = loc / 2;
	while (i >= 0)
	{
		begin = s[loc - i];
		end = s[i];
		s[i] = begin;
		s[loc - i] = end;
		i--;
	}
}
