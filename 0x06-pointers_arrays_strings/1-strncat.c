#include "main.h"

/**
  * _strncat - conctenates 2 strings
  * @dest: destination string
  * @src: source string
  * @n: parameter
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[length  + i] = *src;
		src++;
	}
	dest[length + i] = '\0';
	return (dest);
}
