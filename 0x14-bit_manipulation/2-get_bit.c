#include"main.h"

/**
 * get_bit - prog returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	mask = 1 << index;
	check = n & mask;
	if (check == mask)
		return (1);
	else
		return (0);
}
