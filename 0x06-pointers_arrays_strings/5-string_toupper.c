#include "main.h"

/**
  * string_toupper - converting lowercase to uppercase
  * @s1: the input string to convert
  * Return: si
  */

char *string_toupper(char *s1)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
			s1[i] = s1[i] - 32;
	}
	return (s1);
}
