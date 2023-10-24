#include <stdio.h>

/**
  * _strchr - Entry Point
  *
  * Description: This is a function that locates a character in a string
  *
  * @s: String to be parsed
  *
  * @c: Character to be matched
  *
  * Return: (s) pointer
  */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		int flag = 0;

		if (s[i] != c)
			flag = 1;
		if (flag == 0)
			return (s + i);
	}
	return (NULL);
}
