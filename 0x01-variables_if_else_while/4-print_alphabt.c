#include <stdio.h>
/**
* main - Entry point
* Return: Always 0
*/
int main(void)
{
	char lqe;

	for (lqe = 'a'; lqe <= 'z'; lqe++)
	{
		if (lqe != 'e' && lqe != 'q')
		{
			putchar(lqe);
		}
	}
	putchar('\n');
	return (0);
}
