#include <stdio.h>
#include <math.h>
/**
 * main - Prints largest prime factor
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long num = 612852475143, i, largest;
	double root = sqrt(num);

	for (i = 1; i <= root; i++)
	{
		if (num % i == 0)
		{
			largest = num / i;
		}
	}
	printf("%ld\n", largest);

	return (0);
}

