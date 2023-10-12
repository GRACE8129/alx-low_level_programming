#include "main.h"

/**
  * _isdigit - checks for digits prints 0 if otherwise
  * @c: function parameter
  * Return: 1 if is a digit , 0 if otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
