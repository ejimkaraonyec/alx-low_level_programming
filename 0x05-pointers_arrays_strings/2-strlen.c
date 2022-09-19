/**
 * _strlen - returns length of string
 *
 * @s: pointer variable
 *
 * Return: length of s string
 */

int _strlen(char *s)
{
	int i, len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
