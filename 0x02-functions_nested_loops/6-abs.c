#include "main.h"
/**
 * _abs - Computes absolute value for an integer
 *@x: Input for integer
 * Return: x (Success)
 */
int _abs(int r)
{
	if (r < 0)
		r = (r * -1);
	else
		r = r;
	return (r);
}
