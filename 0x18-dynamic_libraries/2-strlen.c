#include "main.h"

/**
 * _strlen - lenght of a string
 * @s: param
 *
 * Return: int
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
