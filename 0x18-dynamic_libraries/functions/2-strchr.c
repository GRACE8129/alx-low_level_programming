#include "main.h"

/**
 * _strchr - Find the first occurrence of a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 * Return: Pointer to the first occurrence or NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		while (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
