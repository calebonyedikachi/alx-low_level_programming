#include "main.h"

/**
 * *_strncat - concatenate two strings.
 * @dest: The string that will be appended upon.
 * @src: The string that will be added to @dest.
 * @n: The number of bytes from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
