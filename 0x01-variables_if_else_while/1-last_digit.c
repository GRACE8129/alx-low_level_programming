#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (successful)
 */
int main(void)
{
	int n;

	int g;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	g = n % 10;
	if (g > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, g);
	if (g == 0)
		printf("last digit of %d is %d and is 0\n", n, g);
	if (g < 6 && g != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, g);
	return (0);
}
