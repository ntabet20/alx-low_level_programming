#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char str;

	for (i = 0 ; i < 10 ; i++)
		putchar((i % 10) + '0');
	for (str = 'a' ; str <= 'f' ; str++)
		putchar(str);
	putchar('\n');
	return (0);
}
