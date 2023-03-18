#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char st[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0 ; i < 26 ; i++)
		putchar(str[i]);
	for (i = 0 ; i < 26 ; i++)
		putchar(st[i]);
	putchar('\n');
	return (0);
}
