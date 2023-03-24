#include "main.h"

/**
 * print_triangle - prints the shape of triangle
 * @size: actual triangle size.
 *
 * Return: no value
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (j = i ; j < size ; j++)
				_putchar(' ');
			for (k = 1 ; k <= i ; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
