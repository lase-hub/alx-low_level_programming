#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet ten times
 *
 */
void print_alphabet_x10(void)
{
	char letter;
	int ten;

	for (ten = 0; ten < 10; ten++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
