#include "main.h"
/**
 * print_alphabet_x10 - 10x alphabet
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int t;
	int l;

	for (t = 1; t <= 10; t++)
	{
		for (l = 97; l <= 122; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
