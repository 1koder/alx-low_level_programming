#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print lowercase and uppercase alphabets
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char qa = 'a';

	while (qa <= 'z')
	{
		if (qa == 'e' || qa == 'q')
			qa++;
			putchar(qa);
		qa++;
	}
	putchar('\n');

	return (0);
}
