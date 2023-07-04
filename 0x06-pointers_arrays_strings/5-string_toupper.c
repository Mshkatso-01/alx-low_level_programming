#include <stdio.h>
#include "main.h"
/**
 *string_toupper - convert lowercase characters to uppercase
 *@string: the string itself!!
 * Return: char* - the string afterwards
 */
char *string_toupper(char *string)
{
	char *result;

	result = string;
	while (*string)
	{
		if ((*string >= 'a') && (*string <= 'z'))
		{
			*string -= 32;
		}
		string += 1;
	}
	return (result);
}
