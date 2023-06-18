#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Alphabets in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char qa = 'z';

	while (qa >= 'a')
	{
		putchar(qa);
		qa--;
	}
	putchar('\n');

	return (0);
}

