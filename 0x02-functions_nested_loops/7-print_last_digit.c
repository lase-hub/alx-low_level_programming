#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @r: Integer input
 *
 * Return: x
 */
int print_last_digit(int r)
{
	int x;

	x = r % 10;
	if (r < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
