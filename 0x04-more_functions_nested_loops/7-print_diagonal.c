#include "main.h"

/**
  * print_diagonal - prints diagonal using the *\* character
  * @n: numbers of times the \ should be printed
  * Return: void
  */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{

		int k;
		int j;
			for (k = 0; k < n; k++)
			{
				for (j = 0; j <= k; j++)
					if (j != 0)
						_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
	}
}
