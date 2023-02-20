#include <stdio.h>

/**
 * main - primary function
 *
 * Return: 0  When successful
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char)\);
	printf("Size of an int: %lu byte(s)", sizeof(int)\);
	printf("Size of a long int: %lu byte(s)", sizeof(long int)\n);
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int)\n);
	printf("Size of a float %lu byte(s)", sizeof(float)\n);
	return (0);
}
