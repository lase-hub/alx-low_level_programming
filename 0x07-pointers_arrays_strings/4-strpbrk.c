#include <stdio.h>
#include "main.h"
/**
 * *_strpbrk - searches a string
 * @s: the string that is searched
 * @accept: second string
 *
 * Return: null
 */
char *_strpbrk(char *s, char *accept)
{
	int c, d;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (s[c] == accept[d])
				return (s + c);
		}
	}
	return (NULL);
}
