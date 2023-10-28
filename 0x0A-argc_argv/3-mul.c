#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers.
 * @argc: Number of program arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 if two arguments are provided, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	{
		printf("%d\n", result);
	}

	return (0);
}
