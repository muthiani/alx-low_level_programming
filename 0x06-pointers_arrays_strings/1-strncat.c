#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append.
 * @src: string to be appended.
 * @n: number of bytes.
 *
 * Return: Pointer to appended string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0' ; j++)
		dest[i + j] = src[j];

	return (dest);
}
