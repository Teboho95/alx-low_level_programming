#include "main.h"

/**
 * _strchr -locates a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 *
 * Return: C is found - a pointer to the first occurence
 * if C is not found - Null
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
