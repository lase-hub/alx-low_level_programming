#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Print a set of numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		_putchar(x);
	_putchar('\n');
}
