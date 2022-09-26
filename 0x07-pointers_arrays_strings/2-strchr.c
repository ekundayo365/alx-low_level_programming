#include "main.h"
/**
 *_strchr - locates a character in a string,
 *@s: string.
 *@c: character.
 *Return: the pointer to the first occurrence of the character c.
 **/
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
