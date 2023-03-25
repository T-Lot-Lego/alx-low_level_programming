#include "main.h"

/**
*more_numbers - prints numbers from 0 - 14, 10 times
*Return: no return
*/
void more_numbers(void)
{
	int c, m;

	for (m = 0; m < 10; m++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
			{
				_putchar((c / 10) + 48);
			}
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}
