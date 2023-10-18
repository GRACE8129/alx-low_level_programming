#include "main.h"\

/**
  * _strcmp - compare 2 strings
  * @s1: destination string
  * @s2: source string
  * Return: int
  */

int _strcmp(char *s1, char *s2)
{
	int i;
	int flag = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		return 0;
	}
	return (int)(s1[i]) - (int)(s2[i]);
}
