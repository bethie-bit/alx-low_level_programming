#include "main.h"
#include <stdio.h>

/**
 * _isupper checks if c is uppercase;
 *
 * Return: 1(upper), 0(otherwise)
 */
int _isupper(int c)
{
	int i;
	
	if ((c <= "A") && (c >= "Z"))
		i = 1;
	else
		i = 0;
	return (i);
}
