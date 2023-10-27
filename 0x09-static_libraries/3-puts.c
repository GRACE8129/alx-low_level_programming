#include "main.h"

/**
  * _puts - function to print a string and a new line
  * @str: string integer
  */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
		
	}
	_putchar('\n');
}
