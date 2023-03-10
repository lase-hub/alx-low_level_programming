#include "main.h"
/**
 * _abs - Computes absolute value for an integer
 *@x: Input for integer
 * Return: x (Success)
 */
int _abs(int x)
{
	if (x < 0)
		x = (x * -1);
	else
		x = x;
	return (x);
}
