#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * prints the alphabet on separate lines 10 times
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
