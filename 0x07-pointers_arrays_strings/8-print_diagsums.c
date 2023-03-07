#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print the sum of two diagonals
 * @a: the array
 * @size: size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int firstSum = 0, secondSum = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		firstSum = firstSum + a[i];

	for (j = 0; j <= (size * size) - size; j = j + size - 1)
		secondSum = secondSum + a[j];
	printf("%d, %d\n", firstSum, secondSum);
}
