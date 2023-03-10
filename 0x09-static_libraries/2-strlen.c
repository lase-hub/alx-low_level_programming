#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: Input
 *
 * Return: void
 */

int _strlen(char *s)
{
	int len = 0;

	do {
		len++;
		s++;
	} while (*s != '\0');

	return (len);
}
