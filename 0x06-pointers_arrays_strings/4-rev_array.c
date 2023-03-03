#include "main.h"
/**
 * reverse_array - reverse the contents of an array
 * @a: the string
 * @n: the number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
