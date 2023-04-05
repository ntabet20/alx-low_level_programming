#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int x = 1, y = 2, fib;

	printf("%ld, %ld, ", x, y);
	for (i = 1 ; i <= 96 ; i++)
	{
		fib = x + y;
		printf("%lu", (unsigned long)fib);
		x = y;
		y = fib;
		if (i == 96)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}
