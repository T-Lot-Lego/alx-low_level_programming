#include <stdio.h>

/**
 * main - Print largest prime number
 * Return: Always 0.
 */
int main(void)
{
	long int n, p;

	n = 612852475143;
	for (p = 2; p <= n; p++)
	{
		if (n % p == 0)
		{
			n /= p;
			p--;
		}
	}
	printf("%ld\n", p);
	return (0);
}
