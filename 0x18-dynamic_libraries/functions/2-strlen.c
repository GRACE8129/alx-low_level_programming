#include "main.h"

/**
  * _strlen -function to return the length of a string
  * @s: strings
  * Return: length
  */

int _strlen(char *s)
{
	int length = 0;

		while (*s != '\0')
		{
			length++;
			s++;
		}
	return (length);
}
