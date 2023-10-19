#include "main.h"

/**
  * reverse_array - reverse the content of an array
  * @a: a pointer to an array of integer
  * @n: the number of element in an array
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i;
	int dash;

	for (i = 0; i < n / 2; i++)
	{
		dash = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = dash;
	}
}
