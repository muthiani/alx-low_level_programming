/**
 * _memset() - Fills memory with constant byte
 *
 * @s: pointer to memory area
 * @b: constant byte to be filled
 * @n: number of bytes to be filled
 *
 * Return: char pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
