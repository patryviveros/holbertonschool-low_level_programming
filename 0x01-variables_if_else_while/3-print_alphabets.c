#include <stdio.h>

/**
 * main - printing the alphabet in lowercase
 * and then in uppercase
 * only use putchar function
 * all code in the main function
 * only putchar twice in your code
 * following for a new line
 *Return:0
 */

int main(void)
{
	int letter = 97;

	while (letter < 123)
{
	putchar (letter);
	letter++;
	if (letter == 123)
		letter = 65;

	if (letter == 91)
		break;

}
	putchar(10);
	return (0);
}
