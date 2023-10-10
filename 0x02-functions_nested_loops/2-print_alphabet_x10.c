#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int c;
	int j;

	for (c = 0; c <= 9; c++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

	}
		_putchar('\n')
}


