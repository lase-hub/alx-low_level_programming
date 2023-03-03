#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: A string
 * @src: The second string
 * @n: number of bytes
 *
 * Return: A pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y;

	while (dest[x] != '\0')
		x++;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
