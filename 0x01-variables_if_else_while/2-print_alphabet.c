#include <stdio.h>

/**
 * main - printing the alphabet in lowercase
 * only use putchar
 * all code in the main function
 * only putchar twice in your code
 * following for a new line
 *Return:0
 */

int main(void)
{
	int letter;

	for (letter = 97; letter < 123; ++letter)
	{
		putchar (letter);
	}
	putchar (10);
	return (0);
}
