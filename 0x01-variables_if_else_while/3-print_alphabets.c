#include <stdio.h>

/**
 * main - print in lower then uppercase
 *
 * Description - a putchar function to print in uppercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		putchar(alphabet);
		alphabet = toupper(alphabet);
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
