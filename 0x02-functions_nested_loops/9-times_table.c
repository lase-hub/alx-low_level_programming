#include "main.h"
/**
 * times_table - Prints nine times table
 *
 * Return: void
 */
void times_table(void)
{
	int number;
	int multiply;

		for (number = 0; number <= 9; number++)
		{
			multiply = number * 9;
			_putchar(multiply);
		}
}
