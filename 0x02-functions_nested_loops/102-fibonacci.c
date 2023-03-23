#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int n1 = 1, n2 = 2, i, fib;

	printf("%d, %d, ", n1, n2);
	while (i <= 50)
	{
		fib = n1 + n2;
		printf("%d", fib);
		n1 = n2;
		n2 = fib;
		if (i == 50)
			break;
		printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
