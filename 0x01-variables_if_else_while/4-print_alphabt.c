#include <stdio.h>

/**
 * main - prints alphabet in lowercase folled by a new line except q and e
 *
 * Return: 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'e')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
