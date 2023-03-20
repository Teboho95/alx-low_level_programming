#include<stdio.h>
/**
 * main-To print alphabets in lower case using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar("\n");
	return (0);
}
