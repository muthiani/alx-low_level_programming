#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: prints the last digit of the number n
 * and it's value comparison to 5, 6 and 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;
	if (digit > 5)
		printf("Last digit of %i is %i and is greater that 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %i is %i and is less then 6 and not 0\n", n, digit);

	return (0);

}
