#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * _isupper - checks if c is uppercase
=======
 * _isupper checks if c is uppercase;
>>>>>>> 330d00b8b1b50364176c716583cc80bea6a8f31c
 *
 * Return: i=1 i=0
 */
int _isupper(int c);
{
	int i;
	
	if ((c <= "A") && (c >= "Z"))



<<<<<<< HEAD
		i = 1
	else 
=======
	if ((c >= 'A') && (c <= 'Z'))
		i = 1;
	else
>>>>>>> 330d00b8b1b50364176c716583cc80bea6a8f31c
		i = 0;
	return (i);
}
