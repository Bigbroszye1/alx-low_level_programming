#include <stdio.h>
/**
 *main - Entry
 *Return: Always 0
*/
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long: %d byte(s)\n", sizeof(long));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of float: %d byte(s)\n", sizeof(float));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	return (0);
}