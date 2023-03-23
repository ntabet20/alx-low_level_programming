#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n1 = 1, n2 = 2, fib;
	int i;

	printf("%ld, %ld, ", n1, n2);
	while (i <= 52)
	{
		fib = n1 + n2;
		printf("%ld", fib);
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
