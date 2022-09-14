#include "main.h"

/** 
 * print_alphabeth - print a - z
 *
 * Return: void
 */
 void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	alph++;
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
