#include "main.h"
/**
 * *_strcpy - copies a string from a pointer to another
 * @src: The pointer with the string
 * @dest: The pointer with the buffer
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *mid = dest;

	while (*src)
		*dest++ = *src++;
	return (mid);
}
