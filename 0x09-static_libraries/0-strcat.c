#include "main.h"


/**
 * *_strcat - function that concatenate two strings.
 * @dest: A pointer to a character that will be changed.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int a, k;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	k = 0;
	while (src[k] != '\0')
	{
		dest[a] = src[k];
		k++;
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
