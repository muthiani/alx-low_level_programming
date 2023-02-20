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
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n / 10;
	if (lastDigit < 6 && lastDigit != 0)
		printf("Last digit of %d is %d and is less that 6 and not 0", n, lastDigit);
	else if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0", n, lastDigit);

	return (0);

}
