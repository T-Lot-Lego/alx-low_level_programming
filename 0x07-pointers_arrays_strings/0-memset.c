#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes of the memory area
 * Return: changed array with new value for n bytes to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
