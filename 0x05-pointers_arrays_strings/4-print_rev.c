#include "main.h"
/**
 * print_rev - Prints string in reverse
 * @s: String variable
 *
 * Return: void
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
		rev++;

	while (rev)
		_putchar(s[--rev]);

	_putchar('\n');
}
