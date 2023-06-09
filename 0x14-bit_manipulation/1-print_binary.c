#include "main.h"
#include <stdio.h>

/**
 * print_binary -This function prints the binary representation of a number.
 * @n:This number is to convert into binary representation
 * By Afua Asubonteng
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
