#include "main.h"
/**
 * print_alphabet - in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int q;

	for (q = 97; q <= 122; q++)
	{
		_putchar(q);
	}
	_putchar('\n');
}
