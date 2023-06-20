#include "main.h"

/**
 * main - Entry point & prints _putchar sentence
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char sent[] = "_putchar";
	/*to get the length of a string*/
	int l = sizeof(sent) / sizeof(sent[0]);
	int i = 0;

	for (; i < l; i++)
	{
		_putchar(sent[i]);
	}
	_putchar('\n');
	return (0);
}
