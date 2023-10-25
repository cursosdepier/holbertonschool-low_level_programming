#include <stdio.h>
/**
 * main - prints the alphabet
 * C program to print all upper case and lower case alphabets
 * Return: Always 0
 *
 */
int main(void)
{
	char i;

	printf("Capital (upper) case characters:\n");
	for (i = 'A'; i <= 'Z'; i++)
	printf("%c", i);

	printf("\n\nLower case characters:\n");
	for (i = 'a'; i <= 'z'; i++)
	printf("%c", i);
	return (0);
}
