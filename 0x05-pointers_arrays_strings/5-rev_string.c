#include "main.h"

/**
 * rev_string - Reverses the characters of a null-terminated string.
 * @s: The string to be reversed in-place.
 */
void rev_string(char *s)
{
	int length = 0, temp = 0;
	char sch;

	while (s[temp++])
		length++;

	for (temp = length - 1; temp >= length / 2; temp--)
	{
		sch = s[temp];
		s[temp] = s[length - temp - 1];
		s[length - temp - 1] = sch;
	}
}
