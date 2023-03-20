#include<stdio.h>
/**
 * main-Prints alphabets in lower case then in upper case
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = "a" ; i <= 'z' ; i++)
		putchar(i);
	for (i = "A" ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
