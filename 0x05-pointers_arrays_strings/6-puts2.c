#include "main.h"
/**
 * puts2 - prints every character in a string
 * @str: Variable
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int p;

	while (str[len] != '\0')
		len++;

	len -= 1;
	for (p = 0; p <= len; p += 2)
		_putchar(str[p]);

	_putchar ('\n');
}
