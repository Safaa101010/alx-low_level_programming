#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0. (Success)
 */
void  print_alphabet(void)
{
	int i;

	for (i=97; i<=222; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
