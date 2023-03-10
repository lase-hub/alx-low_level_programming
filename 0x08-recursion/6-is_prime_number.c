#include "main.h"
int original_prime(int n, int a);
/**
 * is_prime_number - checks if there is a prime number or not
 * @n: the number checked
 *
 * Return: returns 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (original_prime(n, n - 1));
}
/**
 * original_prime - checks for the number using recursion
 * @n: the number
 * @a: iteration
 *
 * Return: the prime number
 */
int original_prime(int n, int a)
{
	if (a == 1)
		return (1);
	else if (n % a == 0 && a > 0)
		return (0);
	else
		return (original_prime(n, a - 1));
}
