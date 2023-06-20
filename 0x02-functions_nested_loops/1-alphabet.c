#include "main.h"

/**
 * main - Entry point and implements print_alphabet func
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        print_alphabet();
        return (0);
}

/**
 *print_alphabet - prints the alphabet in lowercase.
 */
void print_alphabet(void)
{
        int i;

        for (i = 97; i < 123; i++)
        {
                _putchar(i);
        }
        _putchar('\n');
}
