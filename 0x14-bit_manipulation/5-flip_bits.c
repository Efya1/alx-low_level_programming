#include <stdio.h>
#include "main.h"
/**
 * flip_bits - This function returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: This is starting
 * by Afua Asubonteng
 * @m The: target
 *
 * Return: number bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int xor;

	xor = n ^ m;

	while (xor)
	{
		bits += xor & 1;
		xor >>= 1;
	}

	return (bits);
}
