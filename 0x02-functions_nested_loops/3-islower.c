#include "main.h"
/**
 * main - Entry Point
 * Description: Write a function that checks for lowercase character.
 * Return: 0 for the rest, 1 for lowercase
*/
int _islower(int c)
{
	if (c >= 9 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
