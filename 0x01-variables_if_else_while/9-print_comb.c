#include <stdio.h>
/**
 * main - Entry point for me
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
		{
		putchar(number);
	if (number == 57)
		{
		break;
		}
	putchar(',');
	putchar (' ');
	}
	putchar('\n');
	return (0);
}
