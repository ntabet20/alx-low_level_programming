#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, fib, a = 1, b = 2, sum = 0;


	for (i = 0 ; i < 30 ; i++)
	{
		fib = a + b;
		if (fib % 2 == 0)
			sum += fib;
		a = b;
		b = fib;
	}
	printf("%d\n", sum);
	return (0);
}
