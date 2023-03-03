#include "main.h"
/**
 * rev_string - print string in reverse
 * @s: the string
 *
 * Return: reversed string
 */
void rev_string(char *s)
{
	char letter;
	int a = 0;
	int b;

	while (s[a] != '\0')
		a++;
	for (b = 0; b < a; b++)
	{
		a--;
		letter = s[b];
		s[b] = s[a];
		s[a] = letter;
	}
}
