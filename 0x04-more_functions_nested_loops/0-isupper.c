#include "main.h"
#include <stdio.h>

/**
 * main int _isupper(int c);
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
