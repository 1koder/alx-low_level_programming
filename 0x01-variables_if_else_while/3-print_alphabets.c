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
	char QA = 'A';

	while (qa <= 'z')
	{
		putchar(qa);
		qa++;
	}
	while (QA <= 'Z')
	{
		putchar(QA);
		QA++;
	}
	putchar('\n');

	return (0);
}

