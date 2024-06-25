#include "main.h"

/**
 *this function concatenates two strings
 */
char *_strcat(char *dest, char *src)
{
	int counter1;
	int counter2;
	int counter3;
	char *p;

	counter1 = 0;
	while (dest[counter1] != 0)
	{
		counter1++;
	}
	counter2 = 0;
	while (src[counter2]  != 0)
	{
		counter2++;
	}
	counter3 = 0;
	for (p = &dest[counter1]; counter3 <= counter2; p++)
	{
		*p = src[counter3];
		counter3++;

	}
	return (dest);
}
