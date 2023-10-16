#include "main.h"

/**
  * _puts - function to print a string and a new line
  * @str: string integer
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
