#include "main.h"\

/**
  * _strcmp - compare 2 strings
  * @s1: destination string
  * @s2: source string
  * Return: int
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
