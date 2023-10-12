#include "main.h"
/**
  * _isupper - checks for upper character
  * @C: function parameter
  * Return: 1 on success 0 on failure
  */

int _isupper(int C)
{
	if (C >= 'A' && C <= 'Z')
		return (1);
	else
		return (0);
}
