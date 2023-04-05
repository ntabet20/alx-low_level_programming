#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9.
 *
 * prints for that range excluding 2 and 4
 * Return: no value.
 */
void print_most_numbers(void)
{
	char c = 48;

	while (c < 58)
	{
		if (c != 50 && c != 52)
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
