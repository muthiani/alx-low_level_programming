#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @*dest: First string. To be appended to.
 * @*src: Second string. To be appended.
 *
 * Return: * pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	/*find terminating null byte*/
	while(dest[i])
		i++;
	
	/*iterate second loop until null byte*/
	for (j = 0; src[j]; j++, i++)
		/*append src characters to dest*/
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
