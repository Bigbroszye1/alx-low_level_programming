#include <stdio.h>

/**
 * main - prints alphabet in lower case
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
