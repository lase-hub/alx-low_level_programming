#include <stdio.h>
/**
 * main - Prints Hexadecimal
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int no;
	char letter;

	for (no = '0'; no <= '9'; no++)
		putchar(no);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
