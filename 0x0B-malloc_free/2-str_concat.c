#include "main.h"
#include <stdlib.h>

/**
  * str_concat - a cunction that concatenate two strings
  * @s1: pointer variable for Betty
  * @s2: pointer variable for Holberton
  *
  * Return: bett
  */

char *str_concat(char *s1, char *s2)
{
	char *bett, *hol;
	unsigned int size0, size1 = 0, size2 = 0;

	if (!s1)
		s1 = "";
	else
		while (*(s1 + size1++))
			;

	if (!s2)
		s2 = "";
	else
		while (*(s2 + size2++))
			;

	size0 = size1 + size2 - 1;

	bett = malloc(size0 * sizeof(char));

	if (!bett)
		return (NULL);

	hol = bett;

	while (*s1)
		*hol++ = *s1++;

	while (*s2)
		*hol++ = *s2++;

	return (bett);
}
