#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - Debuggs code
 *@i: The integer number
 *
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else
		printf("%d is negative", i);
	printf("\n");
}
