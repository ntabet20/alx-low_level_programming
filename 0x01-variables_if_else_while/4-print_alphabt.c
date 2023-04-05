#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 0;
	while (i < 26)
	{
		if (str[i] != 'e' && str[i] != 'q')
			putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
