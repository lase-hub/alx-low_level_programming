#include "main.h"
int second_sqrt_recursion(int n, int a);
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (second_sqrt_recursion(n, 0));
}
/**
 * second_sqrt_recursion - checks for original square number
 * @n: square number
 * @a: iterator
 *
 * Return: square
 */
int second_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	else if (a * a == n)
		return (a);
	else
		return (second_sqrt_recursion(n, a + 1));
}
