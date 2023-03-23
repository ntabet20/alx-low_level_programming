#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, sum = 0;

	for (n = 0 ; n < 1024 ; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}
	printf("sum of multiples of 3 and 5 less than 1024 is: %d\n", sum);
	return (0);
}
