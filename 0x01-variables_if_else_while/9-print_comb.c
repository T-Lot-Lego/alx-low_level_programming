#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int num = 58;

	while (num < 58)
	{
		putchar(num);
		if (num < 57)
		{
			putcha(44);
			putchar(32);
		}
		num++;
	}
	putchar('\n');
	return (0);
}
