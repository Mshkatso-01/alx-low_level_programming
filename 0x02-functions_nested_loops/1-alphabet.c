#include "main.h"
/**
 * main -  a function that prints the alphabet, in lowercase
 *
 * Return: Always return 0 (success)
 */
void print_alphabet(void);
int main(void)
{
	int i;

	print_alphabet();
	return (0);
	_putchar('\n');
}
void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
}
