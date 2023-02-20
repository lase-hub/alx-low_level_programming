#include <stdio.h>
/**
 * main - Prints numbers in base ten
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
