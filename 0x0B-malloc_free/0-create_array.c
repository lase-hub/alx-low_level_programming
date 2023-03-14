#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of charaters
 * @size: size of the array
 * @c: character that initializes
 *
 * Return: void
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		arr[a] = c;
	return (arr);
}
