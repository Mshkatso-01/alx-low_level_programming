#include "main.h"
#include <stdio.h>
/**
 * mul - function  multiplies two integers
 * main - check the code
 * @a: int parameter
 * @b: int  parameter
 * Return:return multi
 */
int mul(int a, int b);
int main(void)
{
	int c = 4;
	int d = 6;
	int multi = mul(c, d);
	putchar(multi);
	return (0);	
}

int mul(int a, int b)
{
	return (a * b);
}
