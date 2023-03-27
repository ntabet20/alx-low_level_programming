#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 * @a: first pointer to first integer
 * @b: second pointer to second integer
 *
 * Return: no value.
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
