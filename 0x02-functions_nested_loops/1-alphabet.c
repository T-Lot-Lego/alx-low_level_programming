#include "main.h"
/**
 * print_alphabet - print lowercase alphabets
 * Return: Always 0
 */
void print_alphabet(void)
{
	int l;

	for (l = 97; l <= 122; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
