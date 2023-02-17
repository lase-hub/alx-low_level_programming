#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Contains the code
 *
 * Description - Adding a character to the random number
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char str[] = "Last digit of";

	if (n % 10 > 5)
		printf("%c %d is %d and is greater than 5\n", str, n, n % 10);
	else if (n % 10 == 0)
		printf("%c %d is %d and is 0\n", str, n, n % 10);
	else
		printf("%c %d is %d and is less than 6 and not 0\n", str, n, n % 10);
	return (0);
}
