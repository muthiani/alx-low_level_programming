#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints size of types.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* sizeof returns the size of a variable */
	printf("Size of a char: %lu bytes(s)", sizeof(char));
	printf("Size of an int: %lu bytes(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return(0);
}
