/**
 * swap_int - Swaps two integer
 * @a: First Integer
 * @b: Second Integer
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
