#include "main.h"
/**
 * _abs - function to find the absolute value of a number
 * @j: function parameter
 * Return: -a or a;
 */

int _abs(int j)

{
	if (j < 0)
		return (-j);
	else if (j >= 0)
		return (j);

	return (0);
}

