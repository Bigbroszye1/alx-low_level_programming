#include "main.h"

/**
 * swap_int - swap values of two integers a and b
 *
 * @a: first value
 * @b: second value
 *
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
