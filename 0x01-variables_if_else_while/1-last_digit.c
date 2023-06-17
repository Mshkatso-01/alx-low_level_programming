#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program print the last digit of the number
 *
 * Return: Always return 0 (success)
 */
int main(void)
{

	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = (n % 10);
	if (x > 5)

		printf("Last digit of %d is %d and is greater than 5", n, x);

	else if (x < 6 && n != 0)

		printf("Last digit of %d is %d and is less than 6 and not 0", n, x);

	else if (x == 0)

		printf("Last digit of %d is %d and is 0", n, x);


	putchar('\n');
	return (0);
}
