#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 *
 * Return: void
 */
char *cap_string(char *str)
{
	int a, b;
	int capital = 32;
	int sep[] = {',', ';', '.', '!', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - capital;
		}

		capital = 0;

		for (b = 0; b <= 12; b++)
		{
			if (str[a] == sep[b])
			{
				b = 12;
				capital = 32;
			}
		}
	}
	return (str);
}

