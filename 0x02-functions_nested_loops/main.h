#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_alphabet()
{
	char c;

	for (c = 'a'; c <= 'z'; c+=)
	{
		_putchar(c);
	}
}
