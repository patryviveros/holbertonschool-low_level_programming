#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - conditional if and else
* assign a random number to the variable
* Return: 0
*/

int main(void)
{
	int n, ultdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ultdigit = n % 10;

	if (ultdigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ultdigit);
	else if (ultdigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, ultdigit);
	else if (ultdigit < 6 && ultdigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ultdigit);

	return (0);
}
