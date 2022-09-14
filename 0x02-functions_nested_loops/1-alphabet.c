#include "main.h"

/**
 * print_alphabet - print a-z
 *
 * Return: void
 */
void print_alphabeth(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	 putchar('\n');
}
