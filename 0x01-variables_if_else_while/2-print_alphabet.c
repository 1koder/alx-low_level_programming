#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char qa = 'a';

	while (qa <= 'z')
	{
		putchar(qa);
		qa++;
	}
	putchar('\n');
	return (0);
}
