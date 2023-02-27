/**
 * _strlen -  returns the length of a string.
 * @s: Strign pointer
 *
 * Return: int c (Length od string)
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		c++;

	return (c);
}
