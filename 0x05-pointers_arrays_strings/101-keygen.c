#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - To generate random password
 *
 * Return: returns integer on success
 */

int main(void)
{
	int pass[100];
	int p, count, s;

	count = 0;
	srand(time(NULL));

	for (p = 0; p < 100; p++)
	{
		pass[p] = rand() % 78;
		count += (pass[p] + '0');
		putchar(pass[p] + '0');

		if ((2772 - count) - '0' < 78)
		{
			s = 2772 - count - '0';
			count += s;
			putchar(s + '0');
			break;
		}
	}
	putchar('\n');

	return (0);
}
