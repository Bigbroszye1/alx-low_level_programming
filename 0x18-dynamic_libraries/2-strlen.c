#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char to be checked
 *Description: this will return the length of a string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
