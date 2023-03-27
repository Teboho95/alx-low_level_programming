#include "main.h"

/**
 * char *_strcpy -Function that copies thr string pointed by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int t = 0;
	int x = 0;

	while (*(scr + 1) != '\0')
	{
		t++;
	}
	for ( ; x < t ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
