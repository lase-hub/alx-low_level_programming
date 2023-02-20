#include <stdio.h>
/**
 * main - Prints numbers in base ten
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	x = getchar();
	
	for (x = '0'; x < '10'; x++)
		
		putchar("%d", x);	
	
	putchar("\n");
	
	return (0);
}
