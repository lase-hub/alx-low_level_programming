#include <stdio.h>
#include "main.h"
/**
 * print_line - drawing a straight line in the terminal
 * @n: Integer variable
 *
 * Return: 0 (Success)
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
