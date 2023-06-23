#include <stdio.h>
#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * main - check the code
 * Return: Always 0 (success)
 */
void print_number(void)
{
	int i;
	
	for (i = '0'; i <= '9'; i++)
	{

		putchar(i);
	}
}
int main(void)
{

	print_number();
	putchar('\n');
}
