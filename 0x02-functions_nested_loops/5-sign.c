#include "main.h"

/**
 * print_sign - determines the sign of a number.
 * @n: represents the number to test sign.
 *
 * Determines if the sign of a number is +, - or 0.
 * Return: Always 1 if +, 0 if 0 and -1 if -.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
