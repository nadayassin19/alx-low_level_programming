#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of char is %s byte\n", sizeof(char));
	printf("Size of int is %d byte \n", sizeof(int));
	printf("Size of long int is %d byte \n", sizeof(long int));
	printf("Size of long long int is %d byte \n", sizeof(long long int));
	printf("Size of float is %f byte \n", sizeof(float));
	return (0);
}
