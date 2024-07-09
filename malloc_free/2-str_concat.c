#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
	{
	int len_s1;
	int len_s2;
	char *s3;
	if (s1==NULL)
	{
		return ("");
	}
	if (s2==NULL)
	{
		return ("");
	}
	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1 ++)
	{
	}		
	for (len_s2 = 0; s1[len_s2] != '\0'; len_s2 ++)
	{
	}
	s3 = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	}
