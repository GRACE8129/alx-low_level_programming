#include <stdio.h>

/**
 * main - Finds and prints the largest prime factors
 *
 * Return: 0 (successful)
 */
int main(void)
{
	long int prime = 612852475143, k;

	while (k < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (k = 3; k < (prime / 2); k += 2)
		{
			if ((prime % k) == 0)
			{
				prime /= k;
			}
		}
	}

	printf("%ld\n", prime);

	return (0);
}
