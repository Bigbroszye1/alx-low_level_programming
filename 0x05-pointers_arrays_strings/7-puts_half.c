#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: char to be checked
 *
 * Return: 0 (success)
 */
void puts_half(char *str)
{
	int string = 0, m;

	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		m = (string - 1) / 2;
	else
		m = (string / 2);
	m++;

	for (string = n; str[string] != '\0'; string++)
	_putchar(str[string]);
	_putchar('\n');

}
