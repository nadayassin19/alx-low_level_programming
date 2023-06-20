#include "main.h"

/**
 * main - Entry point & writes _putchar sentence
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char sent[] = "_putchar";
	/*to get the length of an array*/
	int length = sizeof(sent) / sizeof(sent[0]);
	int i = 0;

	for (; i < length; i++)
	{
		_putchar(sent[i]);
	}
	_putchar('\n');
	return (0);
}
