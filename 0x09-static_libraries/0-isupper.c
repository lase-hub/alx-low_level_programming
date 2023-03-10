#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks if the letter is uppercase or not
 * @c: Character input
 *
 * Return: 0 if it is not and 1 if it is
 */

int _isupper(int c)
{
	char u;

	for (u = 'A'; u <= 'Z'; u++)
	{
		if (c == u)
			return (1);
	}
	return (0);
}
