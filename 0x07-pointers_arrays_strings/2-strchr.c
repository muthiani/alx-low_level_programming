#include <stddef.h>

/**
 * _strchr -  locates a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: Pointer or null
 */


char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			s = &s[i];
		i++;
	}
	if (s[0] == c)
		return (s);
	else
		return('\0');
}
