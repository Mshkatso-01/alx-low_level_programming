#include<stdio.h>
/**
 * main -a program that prints the alphabet in lowercase expect e & q
 *
 * Return: Always is 0 (success)
 */
int main(void)
{
	int lx;

	for (lx = 'a'; lx <= 'z'; lx++)
	{
		if (lx != 'q' && lx != 'e')
		putchar(lx);
	}
	putchar('\n');
	return (0);
}
