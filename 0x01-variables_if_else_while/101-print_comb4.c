#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *            combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			for (k = j; k < 10; k++)
			{
				if (i != j && i != k && j != k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);

					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
