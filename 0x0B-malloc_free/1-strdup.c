#include "main.h"

/**
 * _strdup - Duplicate a string in dynamically-allocated memory.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	char *copy;
	int i;
	int count = 0;

	if (str == NULL)
		return (NULL);

	while (str[count])
		count++;

	copy = malloc(sizeof(char) * (count + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];

	copy[i] = '\0'; /* Null-terminate the copied string. */

	return (copy);
}
