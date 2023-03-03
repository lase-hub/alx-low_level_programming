#include "main.h"
/**
 * swap_int - Swap integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
