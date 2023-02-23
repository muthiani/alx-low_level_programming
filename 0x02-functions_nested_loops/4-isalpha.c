#include "main.h"

/**
 * _isalpha - Checks if input is alphabet
 * @c - inpute character.
 *
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	int i, r = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			r = 1;
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			r = 1;
	}

	return r;
}
