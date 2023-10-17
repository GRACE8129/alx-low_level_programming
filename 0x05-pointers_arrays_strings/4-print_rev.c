#include "main.h"

/**
  * print_rev - print a string in reverse
  * then add a  new line
  * @s: strings
  * Return: void
  */

void print_rev(char *s)
{
	int length;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
