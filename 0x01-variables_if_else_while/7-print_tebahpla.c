#include <stdio.h>
/**
 * main - Print alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
		putchar(m);
	putchar('\n');
	return (0);
}
