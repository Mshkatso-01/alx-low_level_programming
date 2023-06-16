#include<stdio.h>

/**
 * main - a program that prints all single digit numbers of base 10
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	purchar('\n');
	return (0);
}
