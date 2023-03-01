#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: number of bytes
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && dest[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
