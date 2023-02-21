#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints combination of double digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i< 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (i != j && j > i)
			{
				putchar('0' + i);
				putchar('0' + j);

				if (i + j < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);

}
