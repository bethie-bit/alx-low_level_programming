#include "main.h"
#include <stdio.h>

/**
 * checks if c is uppercase;
 *
 * Return 1(uppercase), 0(other)
 */
int _isupper(int c);
{
	int i;

	if ((c >= 'A') && (c <= 'Z'))
		i = 1;
	else
		i = 0;
	return (i);
}
