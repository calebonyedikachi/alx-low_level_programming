#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: content to be copied.
 * @src: source of data to be copied.
 * @n: bytes of the memory.
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
			i++;
	}

	return (dest);
}
