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
	n = (i - 1) / 2;
	if (i % 2 == 0)
		n++;
	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
