#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Checks if it is a digit
 * @c: Input integer
 *
 * Return: 1 if true and 0 otherwisw
 */
int _isdigit(int c)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		if (d == c)
			return (1);
	}
	return (0);
}
