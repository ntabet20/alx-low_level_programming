#include "main.h"

/**
 * _puts - To print a string to stdout
 * @str: pointer variable to string
 *
 * Return: no value.
 */
void _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
