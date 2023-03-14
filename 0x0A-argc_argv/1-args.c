#include <stdio.h>
#include "main.h"
/**
 * main - prints number of arguments
 * @argc: number of lines
 * @argv: an array that points to the above
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv __attribute__((__unused__)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	i -= 1;
	printf("%d\n", i);

	return (0);
}
