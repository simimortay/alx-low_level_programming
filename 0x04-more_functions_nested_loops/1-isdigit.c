#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for digits from 0 through 9
 * @c: int type param
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
	int a;

	for (a = '0'; a <= '9'; a++)

	{
	if (a == c)
	{
	return (1);
	}
	}
	return (0);

}
