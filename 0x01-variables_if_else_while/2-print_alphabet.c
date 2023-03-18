#include <stdio.h>
/**
* main -  I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
* return: Always 0
*/
int main(void)
{
	char alp;
	
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
		putchar('\n');
		return (0);
	}
}
