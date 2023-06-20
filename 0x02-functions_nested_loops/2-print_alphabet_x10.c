#include "main.h"
/**
 * print_alphabety_x10 - prints the alphabets 10 times
 *
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int c;
	int j;

	for (j = 97; c <= 10; c++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
