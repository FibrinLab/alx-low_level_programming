#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Returns: success (0)
 */

void print_alphabet(void)
{
	for(char ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

