#include "main.h"
/**
 * _islower - Checks for lowercase
 *@c: An input character
 * Return: 1 if is lowercase or 0 for uppercase
 */

int _islower(int c)
{
	if (c >= 97  && c <= 122)
		return (1);
	else
		return (0);
}
