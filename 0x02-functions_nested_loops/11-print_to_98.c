#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - printing all natural numbers
 * @n: starting number
 *
 * prints all natural numbers beginning from n to 98
 * Return: no value
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for ( ; n <= 98 ; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for ( ; n >= 98 ; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
