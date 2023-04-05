#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array of integer.
 * @a: pointer to first array element.
 * @n: number of elements
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
