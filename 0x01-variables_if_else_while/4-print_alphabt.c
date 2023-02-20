#include <stdio.h>
/**
 * main - Print alphabets without q and e
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet, q, e;

	q = 'q';
	e = 'e';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{

		if (alphabet != q && alphabet != e)

			putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
