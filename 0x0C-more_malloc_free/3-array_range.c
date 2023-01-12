#include "main.h"
#include <stdlib.h>

/**
 * array_range - craetes an array of integers
 * @min: first integer
 * @max: second integer
 *
 * Return: pointer to newly allocated memory or NULL if it fails
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++; min++)
	{
		a[i] = min;
	}
	return (a);

}
