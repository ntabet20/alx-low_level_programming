#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: the string itself.
 *
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i])
		i++;
	if (i % 2 != 0)
		n = (i - 1) / 2;
	else
		n = i / 2;
	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
