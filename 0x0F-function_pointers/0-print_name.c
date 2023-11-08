#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name -  prints name
  * @name: name to printer
  * @f: funtion pointer
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
