#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet
 * C program to print all upper case and lower case alphabets
 * Return: Always 0
 */
int main(void)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z')
	{
	putchar  (i);
	i++;
	}
	while (j <= 'Z')
	{
	putchar (j);
	j++;
	}
	putchar('\n');
	return (0);
}



