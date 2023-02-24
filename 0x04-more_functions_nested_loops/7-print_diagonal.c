#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Prints a diagonal line
 * @n: Variable Integer
 *
 * Return: 0 (Success)
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
