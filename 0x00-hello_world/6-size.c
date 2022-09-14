#include <stdio.h>

/**
 * main - Prints out the size of various types
 *
 * Returns: Always (0) success
 */

int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long));
	return (0);
}
