#include <stdio.h>
#include "main.h"
/**
 * print_number - Prints an integer
 * @n : Variable
 *
 * Return: 0 (Success)
 */
void print_number(int n)
{
	unsigned int d = n;

	if (n < 0)
	{
		n *= -1;
		d = n;
		_putchar('_');
	}
	d /= 10;
	if (d != 0)
		print_number(d);
	_putchar((unsigned int) n % 10 + '0');
}
