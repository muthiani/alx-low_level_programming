#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: matrix
 * @size: matrix' size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, d1, d2;

	i = d1 = d2 = 0;

	while (i < size * size)
	{
		d1 += *(a + i);
		i += size + 1;
	}
	i =  size - 1;
	while (i < size * size - 1)
	{
		d2 += *(a + i);
		i += size - 1;
	}
	printf("%d, %d\n", d1, d2);
}
