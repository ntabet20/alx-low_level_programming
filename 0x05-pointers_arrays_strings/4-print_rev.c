#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: pointer to the string.
 *
 * Return: no value.
 */
void print_rev(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1 ; j >= 0 ; j--)
		_putchar(s[j]);
	_putchar('\n');
}
