#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Returns: success (0)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

