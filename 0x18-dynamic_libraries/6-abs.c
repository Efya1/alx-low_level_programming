#include "main.h"

/**
 *_abs-prints the absolute value of an integer.
 *@a:the integer to compute its absolute value.
 *Return:returns the abs value.
 *
 */
int _abs(int a)
{
	int b = a;
	int absvalue;

	if (b < 0)
	{
		b = b * (-1);
	}
	absvalue = b;
	return (absvalue);
}
