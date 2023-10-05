#include <stdio.h>

/**
 * main - A program that prints the size of various computer types using printf
 * return: Always 0 (success)
 */
int main(void)
{	
	printf("size of char: %lu 1 byte(s)\n", sizeof(char));
	printf("size of int: %lu 4 byte(s)\n", sizeof(int));
	printf("size of long int: %lu 4 byte(s)\n", sizeof(long int));
	printf("size of long long int: %lu 8 byte(s)\n", sizeof(long long int));
	printf("size of float: %lu 4 byte(s)\n", sizeof(float));
	return (0);
}
