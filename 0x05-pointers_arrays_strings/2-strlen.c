#include <stdio.h>
#include "main.h"
/**
 *_strlen - Return the length of a string
 *@string: pointer to a string to find its length
 *Return: int - the length of a string
 */
int _strlen(char *string)
{
	int result = 0;

	while (*string)
	{
		result += 1;
		string += 1;
	}
	return (result);
}

