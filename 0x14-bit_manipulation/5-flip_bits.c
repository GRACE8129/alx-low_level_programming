#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip
 * to transform one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int output = n ^ m;
	unsigned int countbit = 0;

	while (output > 0)
	{
		countbit += output & 1;
		output = output >> 1;
	}
	return (countbit);
}
