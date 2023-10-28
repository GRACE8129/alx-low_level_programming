#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the sum of positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return:
 *   - 0 if successful.
 *   - 1 if non-digit symbols are present in the input.
 */
int main(int argc, char *argv)
{
	int num1;
	int num2;
	int sum = 0;

	for(num1 = 1; num1 < argc; num++)
	{
		for (num2 = 0; agrv[num1][num2];num2++)
		{
			if (argv[num1][num2] < '0' || argv[num1][num2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		
		sum = sum + atoi(agrv[num1]);
	}
	printf("%d\n", sum);

	return (0);
}		
