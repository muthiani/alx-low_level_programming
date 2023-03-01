#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append.
 * @src: string to be appended.
 *
 * Return: Pointer to appended string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i])
		i++;

	for (j = 0; src[j]; j++, i++)
		dest[i] = src[j];

	return (dest);
}

