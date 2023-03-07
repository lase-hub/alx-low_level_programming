#include <stdio.h>
#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: void
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			n++;
			h++;
		}
		if (*n == '\0')
			return (h);
	}
	return (NULL);
}
