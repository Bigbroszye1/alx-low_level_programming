#include <stdio.h>
#include <unistd.h>
/**
 *
 *Main -main - Prints and that piece of art is useful - Dora Korpar, 2015-10-19,
 *                followed by a new line, to standard error.
 *
 * Return: Alway 1
 */
int main(void)
{
	Write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}