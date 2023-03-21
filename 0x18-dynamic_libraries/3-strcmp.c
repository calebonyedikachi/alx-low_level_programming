#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string one to be compared.
 * @s2: string two to be compared.
 * Return: if str1 < str2, the negative difference.
 * if str1 == str2, 0.
 * if str1 > str2, positive difference.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
