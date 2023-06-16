#include<stdio.h>
/**
 * main -a program that prints the alphabet in lowercase
 *
 * Return: Always is 0 (success)
 */
int main(void)
{
	int lx;

	for (lx = 'a'; lx <= 'z'; lx++)
	{
		putchar(lx);
	}
	putchar('\n');
	return (0);
}
