#include "main.h"

/**
 * print_alphabet_x10 - function
 *
 * Description: Prints lowecase alphabet ten times.
 *
 * Return: Void
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
