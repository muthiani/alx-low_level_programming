#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if ((k * 10) + l > (i * 10) + j)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(' ');
						putchar('0' + k);
						putchar('0' + l);
						if (i + j + k + l < 35)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
