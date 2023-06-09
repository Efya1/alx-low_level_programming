#include <stdio.h>
#include "main.h"
/**
 * get_endianness - This function checks the endianness.
 *
 * by Afua Asubonteng
 * Return: 0 (Big Endian), 1 (Little Endian)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);

	return (0);
}
