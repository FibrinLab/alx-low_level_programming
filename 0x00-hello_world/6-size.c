#include <stdio.h>

/**
 * main - Prints out the size of various types
 *
 * Returns: Always (0) success
 */

int main(void)
{
	puts("Size of a char: %d byte(s)", sizeof(char));
	puts("Size of an int: %d byte(s)", sizeof(int));
	puts("Size of a long int: %d byte(s)", sizeof(long));
	return (0);
}
