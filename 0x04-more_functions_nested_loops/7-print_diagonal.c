#include "main.h"

/**
*print_diagonal - prints diagonal line n times
*@n: argument
*Return: no return
*/
void print_line(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(92);
			if (i < (n - 1))
			{
				_putchar('\n');
			}
	}
	_putchar('\n');
}
