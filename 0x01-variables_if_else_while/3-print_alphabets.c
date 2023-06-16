#include<stdio.h>
/**
 * main -a program that prints the alphabet in lowercase then uppercase
 *
 * Return: Always is 0 (success)
 */
int main(void)
{
	int lx, ux;

	for (lx = 'a'; lx <= 'z'; lx++)
	{
		putchar(lx);
	}
	for (ux = 'A'; ux <= 'Z'; ux++)
	{
		putchar(ux);
	}
	putchar('\n');
	return (0);
}
