#include "main.h"

/**
 * print_last_digit - gives last digit of a number
 * @n: number itself
 *
 * Return: Always return the last digit.
 */
int print_last_digit(int n)
{
	int res;

	res = n % 10;
	if (res < 0)
		return (res *= -1);
	else
		return (res);
}
