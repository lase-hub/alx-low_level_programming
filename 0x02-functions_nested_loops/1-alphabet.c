#include "main.h"
/**
 * print_alphabet - Prints all the alphabets
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		-putchar(letter);
	_putchar('\n');
}
