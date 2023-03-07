#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: contains a number of bytes
 *
 * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bytes, digit;

	digit = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		bytes = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				bytes = 1;
				digit++;
			}
		}
		if (bytes == 0)
			return (digit);
	}
	return (digit);
}
