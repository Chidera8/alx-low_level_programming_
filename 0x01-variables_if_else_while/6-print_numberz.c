#include <stdio.h>
/**
 * main - prints all single digit numbers from 0-9
 * followed by a new line
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
