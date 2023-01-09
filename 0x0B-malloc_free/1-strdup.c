#include "main.h"
#include <stdlib.h>

/**
  * _strdup - function that returns a pointer to a newly
  * allocated space in memory
  * @str: being the variable to the string called in main
  * The pointer (variable 'alx') in this code is just for fun,
  * I could have decleared a different variable
  * but I choose not, it's fun.
  * Return: alx
  */

char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *alx = 0;

	if (!str)
	{
		return (NULL);
	}

	while (*(str + size++))
		;

	alx = malloc(size * sizeof(char));
	if (alx == (NULL))
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			alx[i] = str[i];
	}

	return (alx);
}
