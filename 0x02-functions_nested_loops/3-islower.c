#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: The value to check
 *
 * Return: On success 1
 * On failure 0
 */

int _islower(int c)
{
	int i, r = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			r = 1;
	}

	return (r);
}
